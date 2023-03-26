#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int hajm = 200;
char name[200];


void something() {

	char x[] = "Hello!...";
	string g = x;
	Sleep(100);
	for (int i = 0; i < g.length(); ++i)
	{
		Sleep(50);
		cout << x[i];
	}

	/*000000000000000000000000000*/
	Sleep(2000);
	
	char y[] = " I'm AI brain called PEAS...";
	string h = y;
	Sleep(1500);
	for (int i = 0; i < h.length(); ++i)
	{
		Sleep(90);
		cout << y[i];
	}
	
	char z[] = "I can learn.....who are you....??! ";
	string j = z;
	Sleep(2000);
	for (int i = 0; i < j.length(); ++i)
	{
		Sleep(90);
		cout << z[i];
	}

	/*000000000000000000000000000*/
	/*000000000000000000000000000*/
	
		
	Sleep(2000);
	for (int i = 0; i < j.length(); ++i)
	{
		Sleep(90);
		cin.getline(name, hajm);
		string naw = name;
		Sleep(1000);
		if (name) {
			for (int e = 0; e < naw.length(); ++e) {
				Sleep(90);
				cout << (name[e]);
			}

			
			Sleep(1000);
		}
		/*nwsiny rstakay kotaie*/
		/*00000000000000000000000*/ 
		char zzz[]="... is a crack of Shit ";
		string k = zzz;
		for (int i = 0;i < k.length();++i) {
			cout << k[i];
			Sleep(90);
		}

		/*00000000000000000000000*/


		//cout << (hajm[i]);
	}


		/*000000000000000000000000000*/
}

int main() {
	
	system("color A");
	something();
	
	cin.get();
	cin.get();

	return 0;
}