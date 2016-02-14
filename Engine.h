#ifndef ENGINE_H
#define ENGINE_H

#include "MainContact.h"
#include "TypeContact.h"

#include <string>

class Engine
{
public:
	Engine(const string& users);
	~Engine();
	void SendMsg(MainContact* Recicever);
	ReceiveMsg();
	void setUser(string);

private:
	vector<MSG*> inBox; 
	string users; \\hmmm
};
#endif
