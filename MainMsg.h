#ifndef MAINMSG_H
#define MAINMSG_H

#include <string>

using namespace std;

class MainMsg
{
public:
	MainMsg(const string& ); //sender
	virtual ~MainMsg();
	
	void setMsg(string );	
	void getAuthor(string& )const; 	//Author
//	string getAuthor();		
	virtual void print() const = 0;
	//Maybe time?

private:
	string Author;
	string Message;

};
#endif
