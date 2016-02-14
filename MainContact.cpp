#include "MainContact.h"

MainContact::MainContact(const string& Name)
{
	this->Name = Name;
}

MainContact::~MainContact()
{

}

void MainContact::getContact(string& Name) const
{
	Name = this->Name;
}

//void print()
