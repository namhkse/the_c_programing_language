#include <stdio.h>

int lower(int);

int main(int argc, char const *argv[])
{
  char lowerA = lower('A');
  char one = lower('1');
  char dot = lower('.');

  printf("lowerA is %c\n", lowerA);
  printf("one is %c\n", one);
  printf("dot is %c\n", dot);
  return 0;
}

/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}