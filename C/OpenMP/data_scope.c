#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[])
{
	int numt = -1;
	int tid = -1;
#pragma omp threadprivate(tid)
	numt = omp_get_num_threads();
	tid  = omp_get_thread_num();
	printf("numt: %d, tid: %d\n", numt, tid);
	printf("@ numt: %u, tid: %u\n", &numt, &tid);
#pragma omp parallel shared(numt)
	{
#pragma omp master
{
		numt = omp_get_num_threads();
}
#pragma omp barrier
		tid  = omp_get_thread_num();
		printf("numt: %d, tid: %d\n", numt, tid);
		printf("@ numt: %u, tid: %u\n", &numt, &tid);
	}
	return 0;
}
