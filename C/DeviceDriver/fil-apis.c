#include <stdio.h>

int main(int argc, char *argv[])
{
	char *file_name = "a.txt";
	char buffer[125];
	int count = 0;
	FILE * fa = fopen(file_name, "r");
	if (fa == NULL)
		printf("There is no file ./a.txt");
	FILE * fb = fopen("/dev/pts/8", "w");
	if (fb == NULL)
		printf("There is no file tty0");

	while(!feof(fa)) {
		count = fread (buffer, 1, 256, fa);
		fwrite(buffer, 1, count, fb);
	}
	fclose(fa);
	fclose(fb);
}
