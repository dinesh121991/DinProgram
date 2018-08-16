#include <iostream>
using namespace std;
#include "Extern-Usage.h"
extern int declared;

int main()
{
	cout << declared << endl;
	declared= 5;
	int declared2;
	cout << declared << endl;
	cout << "Declared2:"<<declared2 << endl;
	return 1;
}
