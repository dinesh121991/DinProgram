#include <stdio.h>
#define __vax__  
int main()
{

	#ifdef __vax__
//	#error "Won't"
	#pragma GCC warning "Won't run"
	#endif

}
