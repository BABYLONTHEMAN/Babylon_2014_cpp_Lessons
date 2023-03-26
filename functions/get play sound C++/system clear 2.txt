#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	for(int i=0;i<2;i++)
	{
		system("color A");
		string username;
		string password;
		cout << "Enter your username: " << "\n";
		getline(cin, username, '\n');
		cout << "Enter your password: " << "\n";
		getline(cin, password, '\n');
		if (username == "root" && password == "xyzzy")
		{
			cout << "Access allowed" << "\n";
			cin.get();
		}
		else {
			system("color C");

			cout << "you are not allowed here";
			cin.get();
			system("cls"); //clear screen after enter
		}
		cout << "" << endl;
		i = 0;
	}
	cin.get();
	cin.get();
}