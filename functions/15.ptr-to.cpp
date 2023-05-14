#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Vote
{
public:
    int code, price;

    void getData()
    {
        code = 200;
        cout << code;
    }

    void showData()
    {
        price = 309;
        cout << endl << price;
    }
};

int main()
{
    Sleep(1000);
    system("color 8E");

    Vote x;
    x.getData();

    Sleep(1000);
    cout << "Vote x" << endl;
    cout << "x.getData()" << endl;
    x.showData();

    system("color 8E");
    Sleep(1000);

    cout << endl << "Vote l\nVote* ptr = &l\nptr->getData()\nptr->showData()" << endl;
    Vote l;
    Vote* ptr = &l;

    Sleep(1000);
    ptr->getData();
    Sleep(1000);
    ptr->showData();

    Sleep(1000);
    cout << endl << "ptr->code" << endl;
    Sleep(1000);
    cout << ptr->code;
    Sleep(1000);
    cout << endl << "x.code" << endl;
    Sleep(1000);
    cout << x.code;


    return 0;
}