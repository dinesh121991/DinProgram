#include <dlfcn.h>
#include <stdio.h>
void
bla() {
  printf("bla\n");
}

typedef  void (*func_ptr)();

int main(int argc, char *argv[]) {
  void *func;
  void *handle = dlopen( NULL, RTLD_LAZY);

  bla();
  func = dlsym( handle, "bla" );
  
  if (func)
    (*(func_ptr) func)();
  else
    printf( "%s\n", dlerror());
}
