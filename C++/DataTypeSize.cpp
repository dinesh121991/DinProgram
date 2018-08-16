#include <iostream>
using namespace std;

typedef unsigned int size_t;
int main()
{
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of long double : " << sizeof(long double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   cout << "Size of size_t : " << sizeof(size_t) << endl;
	int *i;

   cout << "Size of int pointer : " << sizeof(i) << endl;
 	long double *j;

   cout << "Size of long double pointer : " << sizeof(j) << endl;
  return 0;
}
