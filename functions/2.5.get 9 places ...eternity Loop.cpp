#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class BEE {
	char x = 'X';
	char o = 'O';

public:
	void xScreen();
	void oScreen();
	void choice();
	void equal();
};

void BEE::xScreen() {
	cout << x << " " << x << " " << x << endl;
	cout << x << " " << x << " " << x << endl;
	cout << x << " " << x << " " << x << endl;

}
void BEE::oScreen() {
	cout << o << " " << o << " " << o << endl;
	cout << o << " " << o << " " << o << endl;
	cout << o << " " << o << " " << o << endl;
}
void BEE::choice() {
	char b;
	cout << "\n enter your choose Matrix Screen between x and o : ";
	cin >> b;
	switch (b) {
	case 'x':
		xScreen();
		break;
	case 'o':
		oScreen();
	}

}
void BEE::equal()
{

}
int main()
{
	system("color A");
	for (int i = 0; i < 2; i++) {
		BEE object;
		object.choice();
		i = 0;
	}
	
	cin.get();
	cin.get();
	
}