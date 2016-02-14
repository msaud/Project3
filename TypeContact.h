#ifndef TYPECONTACT_H
#define TYPECONTACT_H

#include "MainContact.h"
#include <string>

using namespace std;

class FB: public MainContact
{
public:
	FB(const string& Name,const string& FBUser);
	~FB();
	void getFB(string& FBUser);
	void print() const;

private:
	string FBUser;

};

class Email: public MainContact
{
public:
	Email(const string& Name,const string& EmailAddress);
	~Email();
	void getEmail(string& EmailAddress);
	void print() const;

private:
	string EmailAddress;

};

class PhoneMsg: public MainContact
{
public:
	PhoneMsg(const string& Name,const string& PhoneNum);
	~PhoneMsg();
	void getPhone(string& PhoneNum);
	void print() const;

private:
	string PhoneNum;

};
#endif
