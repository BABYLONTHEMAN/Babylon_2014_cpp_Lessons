#include <iostream>
#include <string>


using namespace std;
int i;
class fruit{

protected:
	char *nameoftheFruit;
	int len;
public:
	 int memberFruit()
	{
		len = 0;
		nameoftheFruit=new char [len+1];
	}
		void data()
		{
			char *chooseFruit;
			chooseFruit = new char[20];
			cout << "enter fruit's name = " << "\n";
			cin >> chooseFruit;
			cout << "\n";
			len = strlen(chooseFruit);
			nameoftheFruit = new char[len + 1];
			strcpy(nameoftheFruit, chooseFruit);
		}

		void show(){

			cout << "\nname of Fruit " << i << " = ";
			cout<< nameoftheFruit << "\n";
		}
	

};




int main()
{

	int n = 1;
	int option;
	fruit *newFruitPointers[10];
	
	do{
		newFruitPointers[n] = new fruit;
		newFruitPointers[n]->data();
		n++;
		cout << "\nyour option 1 or 0 ? = ";
		cin >> option;

	} while (option);
	cout << " -----------------\n\n";
	for (i = 1; i < n; i++)
	{
		newFruitPointers[i]->show();
		
	}
	cout << "-------------------\n\n";
	getchar();
	getchar();

	return 0;
	
}