#include <iostream>
#include <string>


using namespace std;
int size = 20;
char name[20];
int main ()
{
	cin.getline(name,size);
	cout.write(name,size);

	getchar();
	getchar();

	return 0;
	
}