#include "calc.h"
#include <stdio.h>

#define MAXVAL 100
static int sp = 0;
double val[MAXVAL];

void push(double) {
  printf("push\n");
}

double pop(void) {
  printf("pop\n");
}