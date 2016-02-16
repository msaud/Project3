#ifndef ENGINE_H
#define ENGINE_H

#include "MainContact.h"
#include "TypeContact.h" //Do I really need it here???
#include "MainMsg.h"
#include "TypeMsg.h"

#include <string>
#include <vector>


class Engine
{
public:
	Engine(const string& users);
	~Engine();
	void SendMsg(MainContact* Recicever);
	void ReceiveMsg();
	void setUser(string);
	void OpenInbox();   //print what Inbox contain

private:
	vector<MainMsg*> inBox;
	string users;
};
#endif
#
