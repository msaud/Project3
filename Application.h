#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>
#include "MainContact.h"
#include "Engine.h"


class Application
{
public:
	Application();
//	~Application();
	string SignIn;
	void InterAct();
	void PrintContact();
	Contact* getContact();

private:
	Engine aEngine;
	int ContactCounter;
	void getContacts();
	map <int, MainContact*> List;
};
#endif
