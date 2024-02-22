#include <stdio.h>

int strend(char *, char *);

// gcc strend.c
int main(int argc, char const *argv[])
{
  char *s = "qweasdzxc123Hello";
  char *t = "Hello";
  int end = strend(s, t);
  printf("%d\n", end);

  return 0;
}

/* strend: return 1 if string t occurs at the end o string s, and zero otherwise */
int strend(char *s, char *t)
{
  char *sStart = s;
  char *tStart = t;

  while (*s) s++;
  while (*t) t++;

  while ((*s-- == *t--) && s != sStart && t != tStart);

  if (t == tStart)
    return 1;
  else
    return 0;
}
