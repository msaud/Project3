#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>
#include "MainContact.h"
#include "Engine.h"

#include <string>

class Application
{
public:
	Application();
//	~Application(); 
// map <int, MainContact*> GroupOfContact; //list
	string SignIn;
	void MakeChoice();
	void ShowContacts();
	Contact* getContact();

private:
	Engine aEngine;
	int ContactCounter;
	void getContacts();
	map <int, MainContact*> List;
};
#endif
