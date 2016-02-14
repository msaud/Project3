#include "MainMsg.h"

MainMsg::MainMsg(const string& Author)	//or Author(Author)
{
	this->Author = Author;	//sender
}
MainMsg::~MainMsg()
{
}

void MainMsg::getAuthor(string& Author) const
{
	Author = this->Author;		//or return withouth passing prametter 
}

//string MainMsg::getAuthor()

void MainMsg::setMsg(string Message)
{
	this->Message = Message;
}
