#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* max #lines to be sorted */

char *lineptr[MAXLINES]; /* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

// gcc sort.c alloc.c
int main(int argc, char const *argv[])
{
  int nlines; /* number of input lines read */

  if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
  {
    qsort(lineptr, 0, nlines - 1);
    writelines(lineptr, nlines);
    return 0;
  }
  else
  {
    printf("error: input to big to sotf\n");
    return 1;
  }
}

#define MAXLEN 1000 /* max length of any input line */
int getline2(char *, int);
char *alloc(int);

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
  int len, nlines;
  char *p, line[MAXLEN];

  nlines = 0;
  while ((len = getline2(line, MAXLEN)) > 0)
  {
    if (nlines >= maxlines || (p = alloc(len)) == NULL)
      return -1;
    else
    {
      line[len - 1] = '\0'; /* delete newline */
      strcpy(p, line);
      lineptr[nlines++] = p;
    }
  }
  return nlines;
}

void writelines(char *lineptr[], int nlines)
{
  for (int i = 0; i < nlines; i++)
    printf("%s\n", lineptr[i]);
}

int getline2(char *s, int lim)
{
  int c;
  char *t = s;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    *t++ = c;

  if (c == '\n')
    *t++ = c;

  *t = '\0';
  return t - s;
}

void swap(char *v[], int i, int j)
{
  char *temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

void qsort(char *v[], int left, int right)
{
  int i, last;
  void swap(char *v[], int i, int j);
  if (left >= right)
    return;
  swap(v, left, (left + right) / 2);
  last = left;
  for (i = left + 1; i <= right; i++)
    if (strcmp(v[i], v[left]) < 0)
      swap(v, ++last, i);
  swap(v, left, last);
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}