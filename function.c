#include <stdio.h>

extern char foo[];

void doSomething()
{
    printf("In function.c: foo is %s\n", foo);
}