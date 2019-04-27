#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0, j = 0;
	for (i = 0; i < 10; i++) {
		printf("at %d\n", __LINE__);
		while (j < 10) {
			printf("at %d\n", __LINE__);
			if (j == 5) {
				printf("inside 5 i : %d j: %d\n", i, j);
				j++;
				continue;
			} else {
				printf("outside 5 i : %d j: %d\n", i, j);
				j++;
			}
		}
		j = 0;
	}
	return 0;
}
