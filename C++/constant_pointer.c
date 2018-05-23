#include <stdio.h>

int main()
{
	int var1 = 0, var2 = 10, var3 = 100;
	int *const cons_ptr = &var1;
	const int *ptr_to_const = &var2;
	const int *const const_ptr_to_const = &var3;
	printf("%d %d %d\n", *cons_ptr, *ptr_to_const, *const_ptr_to_const);
	/*cons_ptr = &var2;
	*ptr_to_const = 11;
	*const_ptr_to_const = 101;
	const_ptr_to_const = &var2;
	printf("%d %d %d\n", *cons_ptr, *ptr_to_const, *const_ptr_to_const); */
	ptr_to_const = &var3;
	*cons_ptr = var2;
	const_ptr_to_const = &var2;
	*const_ptr_to_const = var2;
	printf("%d %d %d\n", *cons_ptr, *ptr_to_const, *const_ptr_to_const);

	return 0;
}
