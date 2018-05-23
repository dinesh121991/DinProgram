#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

void * thread_sub_function( void *t_arg)
{
	int thread_id = *((int *)t_arg);
	printf("Pthread %d Started, Process ID:%d \n", thread_id, getpid());
	pthread_exit(NULL);
}

int main( int argc, char *argv[])
{
	pthread_t threads[NUM_THREADS];
	int thread_id = 1;
	for( ; thread_id <= NUM_THREADS; thread_id++ ) {
		pthread_create( &threads[thread_id-1], NULL, 
				thread_sub_function, (void *)&thread_id);
	}
	pthread_exit(NULL);
}
