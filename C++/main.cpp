#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void function(int i)
{
    static int a=0;
    a++;
    int t=i;
    i=varGlobal;
    varGlobal=t;
    printf("Call #%d:\ni=%d\nvarGlobal=%d\n\n",a,i,varGlobal,t);
}

int main() {
    function(4);
    function(6);
    function(12);
    return 0;
}
