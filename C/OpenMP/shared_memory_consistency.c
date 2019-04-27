#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[])
{
	int flag1 = 0, flag2 = 0;
	#pragma omp parallel
	{
		int thr_id = omp_get_thread_num();
		if (thr_id == 0) {
			flag1 = 1;
			if (flag2 == 0) {
				printf("P1 wins!!!\n");
			}
		} else if (thr_id == 1) {
			flag2 = 1;
			if (flag1 == 0) {
				printf("P2 wins!!!\n");
			}
		} else {
		}
	}
	return 0;
}
