#include <iostream>

using namespace std;

class secret
{
	int a;
	int b;

public:
	void getdata()
	{
		a = 25;
		b = 50;
	}
	friend float mean(secret oj);

};

float mean(secret oj) //oj objecty classa (objecty secreta)
{	
	return float (oj.a + oj.b);

}

int main()
{
	secret OBJ;
	OBJ.getdata();
	cout<<mean(OBJ); // bo display friend function
	cin.get();
	cin.get();
	return 0;
}