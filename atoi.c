#include <stdio.h>

int atoi(char[]);

int main(int argc, char const *argv[])
{
  int seven = atoi("00007");
  int twentyfive = atoi("25.0");

  printf("seven is %d\n", seven);
  printf("twentyfive is %d\n", twentyfive);
  return 0;
}

/* atoi:  convert s to interger */
int atoi(char s[])
{
  int n = 0;

  for(int i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    n = 10 * n + (s[i] - '0');
  return n;
}