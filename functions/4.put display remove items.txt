#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


const int spacesAllowed = 100;


class ITEMS{
	int code[spacesAllowed];
	float price[spacesAllowed];
	int numberofItems;

public:
	void number()
	{ 
		numberofItems = 0;
	}
	void putItems();
	void totalCost();
	void remove();
	void displayItems();


};
void ITEMS::putItems()
{
	cout << " please write your item's code = ";
	cin >> code[numberofItems];
	cout << "\nplease write your items price = ";
	cin >> price[numberofItems];
	numberofItems++;
}

void ITEMS::totalCost()
{
	float sum = 0;
	for (int i = 0; i < numberofItems; i++) //rastawxo yaksani maka ba i chonka ghalat darachet
		sum = sum + price[i];
	cout << "your total cost is = " <<sum ;
}
void ITEMS::remove(){
	int a;
	cout << "enter item code to be deleted = \n";
	cin >> a;
	for (int i = 0; i < numberofItems; i++)
		if (code[i] == a)
			price[i] = 0;
}
int main()
{
	system("color A");
	ITEMS object;
	object.number();
	int N;
	do{
		cout << " Please :\n1 for put \n2 for diplay\n3 for remove \n4 for Quit \n";
		cin >> N;
		switch (N)
		{
		case 1:object.putItems(); break;
		case 2:	object.totalCost(); break;
		case 3:	object.remove(); break;
		case 4: break;
		}

	} while (N!=4);
	
	return 0;
}