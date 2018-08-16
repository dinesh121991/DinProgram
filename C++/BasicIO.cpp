#include <iostream>
using namespace std;

int main()
{
	char name1[10];
	char *name;
	short int size;
	cout << "Enter your name-size:" ;
	cin >>  size ;
	cout << "Enter your name:" ;
	name = new char[size];
	cin >> name ;
	cout << "Your name is:" << name << endl;
	delete [] name;
	return 0;
}
