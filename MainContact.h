#ifndef MAINCONTACT_H
#define MAINCONTACT_H

#include <string>
#include <iostream>

using namespace std;

class MainContact
{
public:
	MainContact(const string& Name);
	virtual ~MainContact();
	void getContact(string& Name) const;
	virtual void print() const = 0;

private:
	string Name;

};

#endif
