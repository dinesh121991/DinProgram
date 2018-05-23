#include <stdio.h>
#include <string.h>

int main() 
{
	char str1[20] = "Dinesh kumar rajagopal";
	char *str2 = strstr(str1, "kumar");
//	str1[0] = 'G';
	printf("String1: %s, String2: %s\n", str1, str2);
	printf("@String1: %u, String2: %u\n", str1, str2);
/*
	char *str3 = strtok(str1, " ");
	while (str3) {
		printf("Token: %s", str3);
		printf("@Token: %u", str3);
		str3 = strtok(str1, " ");
	}
*/
	return 0;
}

