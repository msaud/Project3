#ifndef APPLICATION_H
#define APPLICATION_H

#include "MainContact.h"
#include "Engine.h"

#include <string>
#include <map>

class Application
{
public:
	Application();
	~Application();
	string SignIn();
	void MakeChoice();
	void ShowContacts();
	MainContact* getContact();
	char DisplayMenu();

private:
	Engine aEngine;
	int NumberOfContacts;
	void getContacts();
	map <int, MainContact*> List;
};
#endif
