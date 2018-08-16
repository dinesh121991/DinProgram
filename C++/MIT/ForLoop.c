#include <stdio.h>

int main(int argc, char ** argv){
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

	int i = 1;
arg:
	if( i < argc ) {
		printf("%s\n",argv[i]);
		i++;
		goto arg;
	}
    return 0;
}
