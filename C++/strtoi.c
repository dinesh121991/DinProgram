#include <stdio.h>
#include <string.h>


#include <errno.h>
#include <limits.h>
#include <stdlib.h>

int mystrtoi(const char *str) 
{
  char *endptr;
  errno = 0;
  long l = strtol(str, &endptr, 0);
  if (errno == ERANGE || *endptr != '\0' || str == endptr) {
    printf("long integer range issue \n");
  }
  #if LONG_MIN < INT_MIN || LONG_MAX > INT_MAX
  if (l < INT_MIN || l > INT_MAX) {
    errno = ERANGE;
    printf("integer range issue \n");
  }
  #endif

  return (int) l;
}

int main(int argc, char *argv[])
{
	char *a = "122276118872";
	int int_a = mystrtoi(a);
	printf("a: %s int_a: %d errno: %d error: %s\n", a, int_a, errno, strerror(errno));

	a = "129";
	int_a = mystrtoi(a);
	printf("a: %s int_a: %d errno: %d error: %s\n", a, int_a, errno, strerror(errno));

	a = "12227611887212912653333333";
	int_a = mystrtoi(a);
	printf("a: %s int_a: %d errno: %d error: %s\n", a, int_a, errno, strerror(errno));
	return 0;
}
