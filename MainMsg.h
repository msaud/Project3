#ifndef MAINMSG_H
#define MAINMSG_H

#include <string>

class MainMsg
{
public:
	MainMsg(const string& ); //sender
	virtual ~MainMsg();
	
	void setMsg(string );	
	void getSender(string& )const; 	//Author
	string getAuthor();		
	virtual void print() const = 0;
	//Maybe time?

private:
	string Author;
	string message;

};
#endif
