#include <stdio.h>

int main()
{
	#ifdef DEBUG
	#error "This is an error message"
	#endif
	return 1;

}
