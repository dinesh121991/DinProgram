#include <stdio.h>

int main(int argc, char * argv[])
{
	int var = 123456789;

	scanf("%-6d", &var);
	printf("-6d: %6d \n", var);

	scanf("%0d", &var);
	printf("0d: %0d \n", var);
	return 0;
}
