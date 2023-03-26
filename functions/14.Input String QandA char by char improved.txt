#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>


using namespace std;

int hajm = 200;
char name[200];


void something() {
	PlaySound("click.wav", NULL, SND_ASYNC);
	char x[] = "Hello!...";
	string g = x;
	Sleep(100);
	for (int i = 0; i < g.length(); ++i)
	{
		Sleep(50);
		cout << x[i];
	}
	//PlaySound(NULL, NULL, 0);
	/*000000000000000000000000000*/
	Sleep(2000);

	char y[] = " I'm AI brain called...PEAS..";
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


	Sleep(1000);
	//for (int i = 0; i < j.length(); ++i)
	//{
		Sleep(90);

		/////////////////////////////////////////////////////////////////////////////
		do
		{

		cin.getline(name, hajm);
		string naw = name;
		Sleep(1000);
		//PlaSound("click.wav", NULL, SND_ASYNC);  
		//if ((name)&&(name!=='\n')) {
		//string p = cin.ignore();
		if  (!naw.empty()) {
		PlaySound("click.wav", NULL, SND_ASYNC);
			for (int e = 0; e < naw.length(); ++e) {
				Sleep(90);
				cout << (name[e]);
			}


			Sleep(1000);

			//----------------
			char zzz[] = "... is strange";

			string k = zzz;
			for (int i = 0;i < k.length();++i) {
				cout << k[i];
				Sleep(90);
			}
			
		}

		// PlaySound(NULL, NULL, 0);
		else {
			//PlaySound("click.wav", NULL, SND_ASYNC);
			
			char zzzz[] = "... don't just enter like crazy ";

			string l = zzzz;
			for (int i = 0;i < l.length();++i) {
				cout << l[i];
				Sleep(90);
			}

			


			
			

			//PlaySound(NULL, NULL, 0);
	}
		
		} while (name);
		//---------------------



		/*nwsiny rstakay kotaie*/
		/*00000000000000000000000*/
		
	
		//PlaySound("Nein Nein Nein! Ja Ja Ja!.wav", NULL, SND_ASYNC);
		/*00000000000000000000000*/

		
		//cout << (hajm[i]);
	}


	/*000000000000000000000000000*/
//}

int main() {

	system("color A");
	something();

	cin.get();
	cin.get();
	
	return 0;
}