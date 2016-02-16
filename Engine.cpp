#include "Engine.h"
#include "TypeMsg.h"
#include <typeinfo> 
#include <string>

using namespace std;

/*
Engine::Engine()
{

}*/
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
	cin.clear();

	cout << "**Press '..' to send your message**";

	//Facebook
	if(typeid(FB) == typeid(*Recicever))
	{
		string msg, Attachment, input;
		cout << "Type your message\n"; 		//Maybe .. to end?
		while(cin >> msg)
		{
			if(msg == "\n.")
				break;
			
			input = input + msg;
		}
		
		cout << "Insert attachment: ";
		cin >> Attachment;
		
		FBMSG aFace(users);
		aFace.setAttach(Attachment);
		aFace.setMsg(input);
		cout << "**Message has been sent**\n";
	
	}
	//Email
	else if(typeid(Email) == typeid(*Recicever))
	{
		string msg, Attachment, input, Sub;
		cout << "Subject: ";
		cin >> Sub;		
		cout << "Type your email: ";
		while(cin >> msg)
		{
			if(msg == "\n")
				break;
			input = input + msg;
		}

		cout << "Insert attachment: ";
		cin >> Attachment;

		EmailMSG aEmail(users);
		aEmail.setMsg(input);
		aEmail.setAttach(Attachment);
		aEmail.setSub(Sub);
	}
	//phoneNumber contact
	else if(typeid(PhoneMsg) == typeid(*Recicever))
	{
		string msg, input;
		cout << "Type your message: ";
		
		while(cin >> msg)
		{
			if(msg =="\n.")
				break;
			input = input + msg;
		}

		TxtMSG aPhoneMsg(users);
		aPhoneMsg.setMsg(input);
		cout << "**Message has been sent**\n";
	
	
	}
	//Add MMS 
	else
		cout << "**Could NOT find info about your contact**\n\n";

}

void Engine::ReceiveMsg()
{
	string tmpSender, tmpMsg;
	
	//recive facebook messages
	tmpSender = " ....SENDER...";
	FBMSG *aFace = new FBMSG(tmpSender);
	tmpMsg = ".....FACEMSG....";
	aFace->setMsg(tmpMsg);
	tmpMsg = "...ATTACHMENT...";
	aFace->setAttach(tmpMsg);
	inBox.push_back(aFace);


	//recive an Email
	tmpSender = " ....SENDER...";
	EmailMSG * aEmail = new EmailMSG(tmpSender);
	tmpMsg = ".....Subject....";
	aEmail->setSub(tmpMsg);
	tmpMsg = ".....FACEMSG....";
	aEmail->setMsg(tmpMsg);
	tmpMsg = "...ATTACHMENT...";
	aEmail->setAttach(tmpMsg);
	inBox.push_back(aEmail);

	
	//Recive a text message
	tmpSender = " ....SENDER...";
    TxtMSG * aPhoneMsg = new TxtMSG(tmpSender);
    tmpMsg = ".....FACEMSG....";
    aPhoneMsg->setMsg(tmpMsg);
    inBox.push_back(aPhoneMsg);

}

void Engine::setUser(string users)
{
	this->users = users;
}

void Engine::OpenInbox()
{
	for(int index = 0; index < inBox.size(); index++)
		inBox[index]->print();
}
