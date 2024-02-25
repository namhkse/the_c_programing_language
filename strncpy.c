#include <stdio.h>
#include <string.h>

char *mystrncpy(char *dest, char *src, int n);

// gcc strend.c
int main(int argc, char const *argv[])
{
  char *mystrncpy(char *, char *, int);

  char s[100];
  char *ct = "hello, world!";
  char *t = mystrncpy(s, ct, 5);
  printf("%s\n", s);
  printf("%s\n", t);

  t = strncpy(s, ct, 8);
  printf("%s\n", t);

  return 0;
}

/* strncpy: copy n characters from source to dest */
char *mystrncpy(char *dest, char *src, int n)
{
  char *start = dest;

  for(; n > 0 && *src != '\0'; n--)
    *dest++ = *src++;
  
  if (n > 0) 
    *dest = '\0';

  return start;
}
