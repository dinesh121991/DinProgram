#include <stdio.h>

int main()
{
	int x=017;int y=12; // is x>y?
	if ( x > y )
		printf("x is >" "y \n");
	else
		printf("x is <" "y \n");

	short int s=0xFF12; // correct?∗/
		printf("short int is %d \n", s);
	//char c=−1; //unsigned char uc=−1; // correct?∗/
	//	printf("Characters : %c %c \n", c, uc);
	puts("hel""lo"); // which is correct?∗/
//	enum sz{S=0,L=3,XL}; // what is the value of XL?∗/
	enum sz2{S=3,L=0,XL}; // what is the value of XL?∗/
	enum sz2 v_sz = L;
	enum sz2 v_sz2= S;
	printf("sz: %d sz2: %d \n",v_sz,v_sz2);
	int a = -15 ; 
	printf("a mod 10 = %d \n", a%10);
	return 0;
}
