#include "Application.h"


Application::Application():aEngine(SignIn())
{
	NumberOfContacts = 0;
	getContacts();
}

string Application::SignIn()
{
	string inPutUserName;
	cout << "Please enter your username: ";
	cin >> inPutUserName;
	return inPutUserName;
}

void Application::MakeChoice()
{
	bool terminate = false;
	char selection;

	while(!terminate)
	{
		selection = DisplayMenu();
		
		switch(selection)
		{
			case 'a':
				cout << "Send a message\n";
				break;
			case 'b':
				cout << "Check inbox\n";
				break;
			case 'c':
				cout << "Choice C\n";
				break;
			case 'd':
				terminate = true;
				break;
			default:
				cout << "This is invalid choice!\n";
		}
	}


}

void Application::ShowContacts()
{
	for(int index = 0; index < NumberOfContacts; index++)
	{
		cout << index + 1 << ")";
	//contactList[index]->print();	
	}
}

MainContact* Application::getContact()
{
	int Who = 0;
	ShowContacts();
	cout << "\nWho you would like to message: "; 	
	cin >> Who;
	
	int IndexContact = Who - 1;

	return List[IndexContact];
}

void Application::getContacts()
{
	//ListOfContact
	//Contact[0] = new FBContact("NAME", "334");
//	NumberOfContacts++;

}

char Application::DisplayMenu()
{
	char choice;
	cout << "Main Menu\n"
		 << "	a) Send a message\n"
		 << "	b) Open my inbox\n"
		 << "	c) Show my contacts\n"
		 << " 	d) Exit"
		 << "	\nPlease make a selection: ";

	cin >> choice;
	cin.ignore();
	return tolower(choice);

}
