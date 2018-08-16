#include <stdio.h>

int a ;
int factorial (int n) {
	int i = 1;
	int b = 1;
	a = n ;

	while (n > 1) {
		i = i * n;
		n = n - 1;
	}
	printf("Fact: %d \n", i);

	i = 1;
	b = 1;
	while( a > 1) {
		i = i * a;
		a = (a - (b)) ;
		b++;
		printf("b : %d a:%d i:%d \n",b, a, i);
	} 

	printf("Fact 2: %d \n", i);
	return i;
}

int main (int argc, char *argv[]) {
	printf("Started \n");
	int fac4 = factorial(4);
	printf("Started -2  \n");
	int fac5 = factorial(5);
	printf("4! = %d, 5! = %d\n", fac4, fac5);
	return 0;
}
