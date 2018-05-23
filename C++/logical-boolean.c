#include <stdio.h>

int main()
{
	int x = 0;
	//printf("%d \n",(x && printf("%d and && \n", x)));
	//printf("%d \n",(x & printf("%d and & \n", x)));
	printf("%d \n",(x && printf(" and && \n")));
	printf("%d \n",(x & printf(" and & \n")));
	return 0;
}
