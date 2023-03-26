#include <iostream>

using namespace std;
class alpha
{
	int x;
public:
	alpha(int j){
		x = j;
		cout << "alpha initialization\n";
	}
	void show_x();

};
class beta
{
	float y;
public:
	beta(float g){
		y = g;
		cout << "beta initialization\n";
	}
	void show_y();

};

class gamma : public beta,public alpha // agar class gamma:public alpha , public beta bet awa yakamjar (initialize)y alpha akat enja beta
{
	int m, n;
public:
	gamma(int a, float b, int c, int d) :
		alpha(a), beta(b)
	{
		m = c;
		n = d;
		cout << "\ngamma initialized \n ";
	}

	void show_mn()
	{
		cout << " m is " << m << endl << "\nn is " << n;
	}
};

void alpha::show_x()
{

	cout << "x = " << x;
}
void beta::show_y()
{
	cout << "y = " << y;

}
int main()
{
	system("color 2");
	gamma hope(5,10.75,3,20);
	hope.show_x();
	hope.show_y();
	hope.show_mn();


	getchar();
	return 0;
}