#include "Engine.h"

#include <string>

using namespace std;

Engine::Engine(const string& users)
{
	setUser(users);
//	this->users = users;
	ReceiveMsg();
}

Engine::~Engine()
{
}

void Engine::SendMsg(MainContact* Recicever)
{
	cin.clean();

	cout << "**Press '..' to send your message**";

	//Facebook
	if(typeid(FB) == typeid(*Recicever))
	{
		string msg, Attachment, input;
		cout << "Type your message\n"; 		\\Maybe .. to end?
		while(cin >> msg)
		{
			if(msg == "\n.")
				break;
			
			input = input + msg;
		}
		
		cout << "Attachment: ";
		cin >> Attachment;
		
		FBMSG Face(users);
		Face.setAttach(Attachment);
		Face.setMsg(input);
		cout << "**Message has been sent**\n";
	
	}
	//Email
	else if(typeid(Email) == typeid(*Recicever))
	{
		
	}
	//phoneNumber contact
	else if(typeid(PhoneMsg) == typeid(*Recicever))
	{
		string msg, Attachment, input;
		cout << "Type your message: ";
		
		while(cin >> msg)
		{
			if(msg =="\n.")
				break;
			input = input + msg;
		}
	
	
	
	}
	else
		cout << "**Could NOT find info about your contact**\n\n";

}

void Engine::ReceiveMsg()
{
	//revive facebook messages
	//string tmpSender, tmpMsg;
	//FBMSG *Face = new FBMSG(tmpSender);
	//tmpMsg = ".....FACEMSG....";
	//Face->setMsg(tmpMsg);
	//tmpMsg = "...ATTACHMENT...";
	//Face->setAttach(tmpMsg);
	//inBox.push_back(Face);


}

void Engine::setUser(string users)
{
	this->users = users;
}

void Engine::OpenInbox()
{

}
