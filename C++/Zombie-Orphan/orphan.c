#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int ch_pid = -1;
	ch_pid = fork();
	pid_t my_pid = 0;
	if (ch_pid > 0) {
		my_pid = getpid();
		printf("My pid is %d \n", my_pid);
		return 0;
	} else if (ch_pid == 0) {
		my_pid = getpid();
		printf("My pid is %d \n", my_pid);
		sleep(50);
	} else {
		my_pid = getpid();
		printf("My pid is %d & error scenario \n", my_pid);
		return -1;
	}
}
