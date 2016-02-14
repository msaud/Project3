#ifndef TYPEMSG_H
#define TYPEMSG_H

#include "MainMsg.h"

class FBMSG: public MainMsg
{
public:
	FBMSG(string& s);
	void setAttach(string);
	void print() const;

private:
	string Attachment;

};

class EmailMSG: public MainMsg
{
public:
	EmailMSG(string&);
	void setAttach(string);
	void setSub(string);
	void print() const;

private:
	string Attachment;
	string Subject;
};

class TxtMSG: public MainMsg
{
public:
	TxtMSG(string& );
	void print()const;
};
#endif
