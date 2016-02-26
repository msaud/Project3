#include "Engine.h"
#include "TypeMsg.h"
#include <typeinfo> 
#include <string>

using namespace std;

Engine::Engine(const string& users)
{
	setUser(users);
	ReceiveMsg();
}

Engine::~Engine()
{
	for (auto it = inBox.begin(); it != inBox.end(); it++)
		delete (*it);

}

void Engine::SendMsg(MainContact* Recicever)
{
	cin.clear();

	cout << "***Press '..' in a new line to send your message***\n";

	//Facebook
	if(typeid(FB) == typeid(*Recicever))
	{
		string msg, Attachment, input;
		cout << "Type your Facebook message\n"; 		//Maybe .. to end?
		while(cin >> msg)
		{
			if(msg == "..")
				break;
			
			input += msg;
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
			if(msg == "..")
				break;
			input += msg;
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
			if(msg =="..")
				break;
			input += msg;
		}

		TxtMSG aPhoneMsg(users);
		aPhoneMsg.setMsg(input);
		cout << "**Message has been sent**\n";
	
	
	}
	//Add MMS 
	else
	{
		cout << "**Could NOT find info about your contact**\n\n";
	}
}

void Engine::ReceiveMsg()
{
	string tmpSender, tmpMsg;
	
	//recive facebook messages from Sarah
	tmpSender = "Sarah Jamal";	//Hanna Han
	FBMSG *aFace = new FBMSG(tmpSender);
	tmpMsg = "This picture we took in the beach last week";
	aFace->setMsg(tmpMsg);
	tmpMsg = "beach.jpg";
	aFace->setAttach(tmpMsg);
	inBox.push_back(aFace);


	//recive facebook messages from Hanna
/*	tmpSender = "Hanna Han";
	FBMSG *aFace = new FBMSG(tmpSender);
	tmpMsg = "Check out this funny videos :D :D";
	aFace->setMsg(tmpMsg);
	tmpMsg = "Funny.mp4";
	aFace->setAttach(tmpMsg);
	inBox.push_back(aFace);
*/

	//recive an Email
	tmpSender = "Faez Soud";	
	EmailMSG * aEmail = new EmailMSG(tmpSender);
	tmpMsg = "Transcript";
	aEmail->setSub(tmpMsg);
	tmpMsg = "I attached my transcript in this email";
	aEmail->setMsg(tmpMsg);
	tmpMsg = "transcript.pdf";
	aEmail->setAttach(tmpMsg);
	inBox.push_back(aEmail);

	//recive an Email from Sofia
/*	tmpSender = "Sofia ";    
	EmailMSG * aEmail = new EmailMSG(tmpSender);
	tmpMsg = "Final project";
	aEmail->setSub(tmpMsg);
	tmpMsg = "I will be free on Wednesday after none to finish out group project";
	aEmail->setMsg(tmpMsg);
	tmpMsg = "schdule.xlsx";
	aEmail->setAttach(tmpMsg);
	inBox.push_back(aEmail);*/
	
	//Recive a text message
	tmpSender = "Mohamed Saud";
    TxtMSG * aPhoneMsg = new TxtMSG(tmpSender);
    tmpMsg = "Please give us a call to keep you updated on your car's status";
    aPhoneMsg->setMsg(tmpMsg);
    inBox.push_back(aPhoneMsg);

}

void Engine::setUser(string users)
{
	this->users = users;
}

void Engine::OpenInbox()
{
	cout << endl;
	unsigned int index;
	for(index = 0; index < inBox.size(); index++)
	{
		inBox[index]->print();
		cout << endl << endl;
	}
}
