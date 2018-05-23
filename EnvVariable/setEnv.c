#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("test\n");
const char* s = getenv("DIN");
printf("DIN :%s\n",(s!=NULL)? s : "getenv returned NULL");
printf("end test\n");

	int rc = setenv("DIN", "raj", 1);
	if( rc ) 
	{
		printf("setenv is 1 \n");
	}
	else 
	{
		printf("setenv is 0 \n");
	}

printf("test\n");
s = getenv("DIN");
printf("DIN :%s\n",(s!=NULL)? s : "getenv returned NULL");
printf("end test\n");
	putenv("DIN=rajagopal");	
	printf("test\n");
s = getenv("DIN");
printf("DIN :%s\n",(s!=NULL)? s : "getenv returned NULL");
printf("end test\n");
return 0;
}
