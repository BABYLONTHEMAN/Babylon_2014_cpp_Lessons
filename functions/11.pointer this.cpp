#include <iostream>
#include <string>


using namespace std;
class person
{
 char name [30];
 float age;
public:
	person(char*s,int a){
		strcpy(name, s);
		age = a;
	}
	 person &person::strange(person&x) //
	{

		if (x.age > age)
			return x;
		else
			return *this; // chonka age nagarenretawa natwani blei return age boia alein *this labati. 
	}

	void display(){

		cout << "name is = " << name;
		cout << "\n age is = " << age;
		cout << "\n";
	}
};
int main ()
{
	person name1("jack", 24);
	person name2("lord", 20);
	person name3("handerson", 30);
	person namecmp = name1.strange(name2);
	namecmp.display();
	namecmp=name2.strange(name3);
	namecmp.display();
	getchar();
	getchar();

	return 0;
	
}