#include "TypeMsg.h"

#include <iostream>


//Facebook Messages

//FBMSG::FBMSG(......

void FBMSG::setAttach(string Attachment)
{
	this->Attachment = Attachment;
}


//Maybe using getMessage and Author fixes the error ..... Maybe Putting Author and Message in protected?? hmmmm
void FBMSG::print() const
{
	cout << "From: " << Author; //sender
	cout << endl << Message;
	cout << "\nThe message has an attachment: " << Attachment ;
}

// Email masseges
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
	cout << "From: " << Author; //sender
	cout << "Subject: " << Subject;
	cout << "\nAttachment: " << Attachment ;
	cout << endl << Massage;
}

//Text messages

void TxtMSG::print()const
{
	cout << "You have reveiced a message\n";
	cout << "From: " << Author;
	cout << endl << Massage;
}
