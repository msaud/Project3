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
	//  void getAuthor(string& )const;  //Author

	string getAuthor()const;
	string getMsg()const;
	virtual void print() const = 0;
	//Maybe time?

	
	virtual bool operator == (const MainMsg& message) const;
	virtual const MainMsg& operator= (const MainMsg& message);
	virtual bool operator!= (const MainMsg& message) const;	
	virtual MainMsg& operator+= (const MainMsg& message);
	virtual bool operator> (const MainMsg& message); 
	virtual bool operator< (const MainMsg& message);
	virtual MainMsg& operator+ (const MainMsg& message);

private:
	string Author;
	string Message;

};
#endif

