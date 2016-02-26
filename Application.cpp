#include "Application.h"


Application::Application():aEngine(SignIn())
{
	NumberOfContacts = 0;
	getContacts();
}

Application::~Application()
{
	delete List[0];
	delete List[1];
	delete List[2];


}

string Application::SignIn()
{
	string inPutUserName, inPutPassword;
	cout << "Username: ";
	cin >> inPutUserName;
	cin.clear();
	cout << "Password: ";
	cin >> inPutPassword;
	cout << endl;
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
				aEngine.SendMsg(getContact());
				break;
			case 'b':
				cout << "Open My inbox\n";
				aEngine.OpenInbox();
				break;
			case 'c':
				cout << "Choice C\n";
				ShowContacts();
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
		List[index]->print();	
	
		cout << endl << endl;
	}
}

MainContact* Application::getContact()
{
	unsigned int Who = 0;
	ShowContacts();
	cout << "\nWho you would like to message: "; 	
	cin >> Who;
	
	while (Who < 1 || Who > List.size())
	{
		cout << "Invalid input! Please choose between 1 and " << List.size() << endl;
		cin >> Who;
	}
	int IndexContact = Who - 1;



	return List[IndexContact];
}

void Application::getContacts()
{
	//ListOfContact
	List[0] = new FB("Sarah Jamal", "Sarah.Jamal8@facebook.com");
	NumberOfContacts++;

	List[1] = new Email("Faez Soud", "F_soud@yahoo.com");
	NumberOfContacts++;

	List[2] = new PhoneMsg("Mohamed Saud", "(971) 337-9240");
	NumberOfContacts++;

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
