#include "TypeContact.h"

//Facebook contact class
FB::FB(const string& Name,const string& FBUser): MainContact(Name)
{
//	MainContact = Name;
	this->FBUser = FBUser;
}

//FB::~FB(){}
void FB::getFB(string& FBUser)
{
	FBUser = this->FBUser;
}

void FB::print() const
{
	string AccountName;
	getContact(AccountName);
	cout << "Account Name: " << AccountName << "\nFaceBook Account: " << FBUser;
}

//Email contact class
Email::Email(const string& Name,const string& EmailAddress): MainContact(Name)
{
//	MainContact = Name;
	this->EmailAddress = EmailAddress;
}

//Email::~Email(){}

void Email::getEmail(string& EmailAddress)
{
	EmailAddress = this->EmailAddress;
}

void Email::print()const
{	
	string AccountName;
	getContact(AccountName);
	cout << "Account Name: " << AccountName << "\nEmail Account: " << EmailAddress;
}

// Phone messages contact class
PhoneMsg::PhoneMsg(const string& Name,const string& PhoneNum): MainContact(Name)
{
//	MainContact = Name;
	this->PhoneNum = PhoneNum;
}

//PhoneMsg::PhoneMsg(){}

void PhoneMsg::getPhone(string& PhoneNum)
{
	PhoneNum = this->PhoneNum;
}

void PhoneMsg::print()const
{
	string AccountName;
	getContact(AccountName); 
	cout << "Account Name: " << AccountName << "\nPhone Number: " << PhoneNum;
}
