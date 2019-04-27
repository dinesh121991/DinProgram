#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int ch_pid = -1;
	ch_pid = fork();
	if (ch_pid > 0) {
		sleep(50);
	} else if (ch_pid == 0) {
		return 0;
	} else {
		exit(-1);
	}
	wait(ch_pid);
	return 0;
}
