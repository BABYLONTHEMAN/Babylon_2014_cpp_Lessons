#include<iostream>
#include<string>
#include<Windows.h>

//Q1 Asking Bard:
//Write a piece of code that contains,
//Segments of codes, when those segments are grouped together, form unexpected protocols. in c++ :) 
//that is the code generated 
using namespace std;
class item
{
public:
	string protocol1 = "GET / HTTP/1.1\nHost: www.example.com\n";
	string protocol2 = "POST /login HTTP/1.1\nHost: www.example.com\nContent-Type: application/x-www-form-urlencoded\nContent-Length: 10\n\nusername=admin&password=password";
	string protocol3 = "CONNECT www.example.com:443 HTTP/1.1\nHost: www.example.com\n";



	std::string b = " the price and stuff ";
	void pshanba();
};
//////////
void item::pshanba() {
	cout << protocol1 << endl;
	cout << protocol2 << endl;
	cout << protocol3 << endl;
}
//////////

int main()
{
	system("color 02");
	item *ptr = new item;
	ptr->pshanba();
	
	return 0;
}
//Q2 And asking more advances it generates this :
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> protocols;
  protocols.push_back("GET / HTTP/1.1\nHost: www.example.com\n");
  protocols.push_back("POST /login HTTP/1.1\nHost: www.example.com\nContent-Type: application/x-www-form-urlencoded\nContent-Length: 10\n\nusername=admin&password=password");
  protocols.push_back("CONNECT www.example.com:443 HTTP/1.1\nHost: www.example.com\n");

  string combined_protocol = "";
  for (string protocol : protocols) {
	combined_protocol += protocol;
  }

  cout << combined_protocol << endl;

  return 0;
}
*/
//Q3 Asking 'what does for (string protocol : protocols) { means, is it like python loop?'
/*
Yes, the for (string protocol : protocols) { statement in C++ is similar to a Python loop. It is a for-each loop that iterates through the elements of the protocols vector. The protocol variable is a temporary variable that is used to store each element of the vector as it is iterated over.

The syntax of the for-each loop in C++ is as follows:

Code snippet
for (type variable : iterable) {
  // code to be executed for each element of the iterable
}
Use code with caution. Learn more
In this case, the type of the variable is string and the iterable is the protocols vector. This means that the protocol variable will be a string that contains each element of the protocols vector as it is iterated over.

The code inside the for-each loop will be executed for each element of the protocols vector. In this case, the code will simply append the protocol variable to the combined_protocol string.

The for-each loop is a powerful tool that can be used to iterate through collections of data in C++. It is similar to the for loop in Python, but it is more concise and easier to read.
*/