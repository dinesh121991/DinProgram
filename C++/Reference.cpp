#include <iostream>
using namespace std;

typedef int a;
typedef a c;

int main()
{
	int i = 101;
	int& j=i;
	int &k = j;
	j = i;
	c l = 1000101;
	j = l;
	cout << i << endl << j << endl << k << endl << l << endl ;
	return 1;
}
