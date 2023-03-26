#include <iostream>
#include <conio.h>

using namespace std;

class C2;
class C1
{

	int a;
public:
	void data(int j){a = j;} // ema la main nrx bo j da anein boya abet lay rast bet 
	                         //chonka yaksan abet ba chap wa chap bakar ahenret la display boy cout'y bkain
	
	void play() {cout << "\n" << a<< "\n";}
	friend void mix(C1&, C2&);
};

class C2
{
	int b;
public:
	void data(int j){b = j;}
	void play(){ cout << "\n" << b << "\n"; }
	friend void mix(C1&, C2&);
};

void mix(C1& x, C2& y)
{
	int temp = x.a;
	x.a = y.b;
	y.b = temp;
}
int main()
{
	system("color A");
	C1 ObjectOne;
	C2 ObjecTwo;
	ObjectOne.data(10);
	ObjecTwo.data(20);

	ObjectOne.play();
	ObjecTwo.play();
	cout << "\nafter altering values in mix function\n";
	mix(ObjectOne, ObjecTwo);
	ObjectOne.play();
	ObjecTwo.play();
	cin.get();
	cin.get();
	return 0;

}
