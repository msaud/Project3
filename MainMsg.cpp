#include "MainMsg.h"



MainMsg::MainMsg(const string& Author)	//or Author(Author)
{
	this->Author = Author;	//sender
}
MainMsg::~MainMsg()
{
}
/*
void MainMsg::getAuthor(string& Author) const
{
	Author = this->Author;		//or return withouth passing prametter 
}
*/


//string MainMsg::getAuthor()

void MainMsg::setMsg(string Message)
{
	this->Message = Message;
}

string MainMsg::getAuthor()const
{
	return Author;
}

string MainMsg::getMsg()const
{
	return Message;
}

bool MainMsg::operator == (const MainMsg& message) const
{
	if((this->Author == message.getAuthor()) && (this->Message == getMsg()))
		return true;

	else
		return false;

}

const MainMsg& MainMsg:: operator= (const MainMsg& message)
{
	if(*this == message)
		return* this;
	else
	{
		this->Message = message.getMsg();
		this->Author = message.getAuthor();
	}
	return* this;
}


bool MainMsg::operator != (const MainMsg& message) const
{
	if((this->Author != message.getAuthor()) || (this->Message != getMsg()))
		return true;

	else
		return false;

}

MainMsg& MainMsg::operator+= (const MainMsg& message)
{
	this->Message = this->Message + message.Message;
	return *this;
}

bool MainMsg::operator> (const MainMsg& message)
{
	if(this->Message.length() > message.getMsg().length())
	{
		return true;
	}
	else
		return false;
}

bool MainMsg::operator< (const MainMsg& message)
{
	if(this->Message.length() <  message.getMsg().length())
	{
		return true;
	}
	else
		return false;
}

MainMsg& MainMsg::operator+ (const MainMsg& message)
{
	this->Message = this->Author + message.Message;
	return *this;
}
