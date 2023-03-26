#include <iostream>
#include <conio.h>
using namespace std;

class secret1;
class secret
{
	int a;
public:
	void getdata( int i)
	{
		a = i;
	}
	friend void bridge(secret,secret1);
	
};

class secret1
{
	int b;
public:
	void getdata(int i)
	{
		b=i;  //amay lay rast yaksana baway lay chap
	}
	friend void bridge(secret, secret1);
};
void bridge(secret obj1, secret1 obj2)
{
	if (obj1.a >= obj2.b)
		cout << obj1.a;
	else
		cout << obj2.b;
}


int main()
{
	system("color A");
	secret OBJECT;
	OBJECT.getdata(13);
	secret1 OBJECT1;
	OBJECT1.getdata(55555);
	bridge(OBJECT, OBJECT1);
	cin.get();
	cin.get();
	return 0;
}