#include <fenv.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <err.h>
//#include <error.h>
double sum(double n)
{
	return n + 10.01;
}

int main(int argc, char *argv[])
{
	double d_val = 0.0;
	char * d_ptr = NULL;
	int status = 0;
	if (argc == 2) {
		d_ptr = argv[1];
		d_val = strtod(argv[1], &d_ptr);
		if (d_ptr == argv[1] || *d_ptr != '\0') {
			warnx("%s %d error in argument[1]: %s\n", 
					__func__, __LINE__, argv[1]);
		}
	}
	if (status = fetestexcept(FE_INVALID | FE_OVERFLOW)) {
		if (status & FE_INVALID) {
			printf("Floating point error conversion and it is invalid \n");
		} else {
			printf("Floating point error conversion and it is overflow \n");
		}
	}
	if (!isnormal(d_val)) {
		warnx("d_val is not normal\n");
	}
	double result = sum(d_val);
	printf("result: %f d_val: %f\n", result, d_val);
	return 0;
}
