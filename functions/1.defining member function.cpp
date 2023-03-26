#include <iostream>
#include <string>

using namespace std;

class BOURNE
{
    string Bankcode ={"THE SECRET CODE IS 00071712014"}; //private by default

    string AgentName={"Jason Bourne"};                   //private by default

public:
    void Getcode();
};


void BOURNE::Getcode(){
string theName=AgentName;
string theCode=Bankcode;
cout<<theName<<"\n"<<theCode;
}




int main()
{
    BOURNE Object;

    Object.Getcode();

    cin.get();
    cin.get();
    return 0;
}
//in this code above I want to get secret name and secret code number but all I get is errors that
 //does not make any sence to me , please help .
