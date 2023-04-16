#include<iostream>
#include<Windows.h>
#include<string>
#include <cstdlib>
using namespace std;


class code
{
	//private by default
	string BankCode = "the code is cool 00008541745";
	string AgentName = "Bourne";

	string name,pass;
public:
	void trypass();
	void getSecretInfo();
};
  void code::trypass()
{
	system("cls");
	
	cout << "\n ok wait a second ...";
	Sleep(3500);
	system("color e");
	system("cls");
	cout << "\n alright ... ";
	Sleep(1500);
	cout << "\n I confirm if you are the asset or not...";
	Sleep(2500);
	system("cls");
	cout << "...";
	Sleep(1500);
	exit(3);
}

  void code::getSecretInfo()
  {
	  int i = 0;
	  while (i < 3)
	  {
		  system("color a");
		  cout << "Enter name and pass for verification";
		  cout << "\n name:";
		  getline(cin, name);
		  cout << "\n password:";
		  cout << "\n";
		  getline(cin, pass);
		  if (name == "admin" && pass == "passwd")
		  {
			  cout << "\n";
			  cout << " **********"; Sleep(2500); cout << "********"; Sleep(2500);
			  system("color e");
			  cout << " Access Allowed" << ""; Sleep(3500); cout << " ******************";
			  cout << "\n " << " the secret info is ... \n Agent name is ...";
			  Sleep(3500); cout << AgentName;
			  Sleep(3500);  cout << "\n and Secret bank password is ... ";
			  Sleep(3500); cout << BankCode << "\n";
			  Sleep(8500);
			  cout << "\n... this system is self terminating anyway ...."; Sleep(7500);
			  Sleep(2500);
			  system("cls");
			  Sleep(1500);
			  cout << "\n.......";
			  Sleep(5500);
			  system("cls");
			  Sleep(5500);
			  break;
		  }
		  i++;
		  
	  }
	  if (i >= 3)
	  {
		  cout << "\n the attempt was too many for this classified info ... "; Sleep(1900); cout << " ... not good...";
		  Sleep(1100);
		  system("cls"); Sleep(1200);
		  system("color c");
		  cout << "\n... this system is self terminating after 5 seconds ....";
		  Sleep(2000);
		  cout << " ..... or whatever!";
		  Sleep(1500);
		  system("cls");
		  ExitProcess(0);
		  system("cls");
		  exit(2);
		  system("cls");
	  }
	  
	
}
int main()

{
	system("color a");
	code o;
	o.getSecretInfo();
	//o.trypass();
	system("cls");
	return 1;
	exit(1);
}