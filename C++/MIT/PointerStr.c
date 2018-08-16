#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
	char *str = (char *) malloc(strlen("hakuna matata!"));
	strcpy(str , "hakuna matata!"); // this line should copy "hakuna matata!"
	str = (char *) realloc(str, strlen("hakuna matata!")+5);
	                         // into our char array
	printf("%s\n", str);
	free(str);
	// Anything else?
}
