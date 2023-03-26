#include "aNumber.h"
#include <iostream>
using namespace std;

void aNumber::input(){


	int b;
	cout << "first a is =" << a;
	cout << "\nEnter a second number";
	cout << endl;
	cin >> b;
	a = b;

}
void aNumber::display()
{
	cout << "Now a is   = " << a;
	getchar();
}
