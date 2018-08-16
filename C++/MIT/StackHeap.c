#include <stdio.h>
#include <stdlib.h>

int main()
{
	int stack1;
	int *heap1;
	int stack2[5];
	int *heap2;
	heap1= (int *) malloc(sizeof(int));

	heap2 = (int *) malloc( 5* sizeof(int));

	printf("stack1 = %x stack2= %x heap1= %x heap2= %x \n",
		&stack1, &stack2, &heap1, &heap2);

	printf("heap1= %x heap2= %x \n", heap1, heap2);
	return 0;
}
