#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int fact(int n);

int main(int argc, char *argv[])
{
	int n = 0;
	if (argc == 2)
		n = atoi(argv[1]);
	assert(n > 0);
	int result = fact(n);
	assert(result > 1);
	printf( "factorial of %d : %d\n", n, result);
	for (int i = 0; i["abcdefgh"]; i++) 
	{ 
		printf("%d\n",i); 
	}
	return 0;
}

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return (n * fact(n - 1));
}





