#include <stdio.h>
#include <omp.h>

int main (int argc, char *argv[])
{
	int num_thr = -1, thr_id = -1;
	#pragma omp parallel
	{
		num_thr = omp_get_num_threads();
		thr_id	= omp_get_thread_num();
		printf("Number of threads: %d current thread is %d\n", num_thr, thr_id);
	}
	return 0;
}
