#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char dest[100], source[] = "Dinesh Kumar";
	memcpy(dest, source, strlen(source));
	printf("BC - Source: %s and Destionation: %s is same\n", source, dest);
	if (!memcmp(source, dest, strlen(source))) {
		printf("Source: %s and Destionation: %s is same\n", source, dest);
	}

	return 0;
}
