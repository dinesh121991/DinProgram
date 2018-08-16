#include <stdio.h>
#include <string.h>
#include "/usr/include/fctl.h"

int
main(int argc, char*argv[]) 
{
	int fd = creat("/dev/fd/0", 0);
	if (fd < 0)
		printf("%s %d problem is: %s", __file__, __LINE__, strerr(errno));

}
