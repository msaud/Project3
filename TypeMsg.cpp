#include "TypeMsg.h"

#include <iostream>


//Facebook Messages

FBMSG::FBMSG(string& users): MainMsg(users)
{
}

void FBMSG::setAttach(string Attachment)
{
	this->Attachment = Attachment;
}


//Maybe using getMessage and Author fixes the error ..... Maybe Putting Author and Message in protected?? hmmmm
void FBMSG::print() const
{
//	string Author, Message;
	cout << "From: " << getAuthor(); //sender
	cout << endl << getMsg();
	cout << "\nThe message has an attachment: " << Attachment ;
}

// Email masseges
EmailMSG::EmailMSG(string& users):MainMsg(users)
{

}
void EmailMSG::setAttach(string Attachment)
{
	this->Attachment = Attachment;
}

void EmailMSG::setSub(string Subject)
{
	this->Subject = Subject;
}

void EmailMSG::print() const
{
	cout << "You have received an Email\n";
	cout << "From: " << getAuthor(); //sender
	cout << "Subject: " << Subject;
	cout << "\nAttachment: " << Attachment ;
	cout << endl << getMsg();
}

//Text messages
TxtMSG::TxtMSG(string& users):MainMsg(users)
{

}
void TxtMSG::print()const
{
	cout << "You have reveiced a message\n";
	cout << "From: " << getAuthor();
	cout << endl << getMsg();
}
