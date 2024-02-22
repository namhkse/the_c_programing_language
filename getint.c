#include <stdio.h>
#include <ctype.h>

extern int getch(void);
extern void ungetch(int);
int getint(int *);

int main(int argc, char const *argv[])
{
  int ch;

  getint(&ch); // Read a single character without echoing it
  printf("You pressed: %d\n", ch);

  return 0;
}

/* getint:  get next integer from input to *pn */
int getint(int *pn)
{
  int c, sign;

  while (isspace(c = getch()))
    ; /* skip white space */

  if (!isdigit(c) && c != EOF && c != '+' && c != '-')
  {
    ungetch(c); /* it's not a numer */
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if (c == '+' || c == '-')
    c = getch();
  for (*pn = 0; isdigit(c); c = getch())
    *pn = 10 * *pn + (c - '0');
  *pn *= sign;
  if (c != EOF)
    ungetch(c);
  return c;
}