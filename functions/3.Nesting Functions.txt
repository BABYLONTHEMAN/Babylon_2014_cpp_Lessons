#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
class number
{
int num1,num2;

public:
    void funN();
    void funC();
    int twoNumbers();
};

int number::twoNumbers(){

if(num1>=num2)
{
    return num1;

}

else
    return num2;

}

void number::funN(){
    cout<<"Enter number 1 and 2 :"<<endl;
    cin>>num1>>num2;

}
void number::funC(){

    int a = num1;
    int b =num2;
      string magicNum;
    if(num1>=num2)
       magicNum={" first number "};
        else
    magicNum={" second number "};
    cout<<"well you first entered number one which is "<<a<<endl;
    cout<<"number two is "<<b<<endl;
    cout<<"But!!!, The bigger value is the value of "<<twoNumbers()<<" \n and it was a "<<magicNum;
}
int main()
{
number object;
object.funN();
object.funC(); //la naw funC definyfunctioni twoNumbers akain boia la naw main ba jia lagal objectaka nainwsin

	cin.get();
	cin.get();
	return 0;
}
