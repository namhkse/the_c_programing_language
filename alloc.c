#define ALLOCSIZE 10000 /* size of available space */

static char allocbuf[ALLOCSIZE];  /* storage for alloc */
static char *allocp = allocbuf;   /* next free position */

/**
 * allocp points to the next free element when alloc is asked for n char
 * check to see if enough roon left in allocbuf
 * if enough alloc return current allocp and increase allocp to n
 * if not alloc return 0
 *  
*/

/* return pointer to n character */
char *alloc(int n) {
  if (allocbuf + ALLOCSIZE - allocp >= n) {
    allocp += n;
    return allocp - n;
  } else
    return 0;
}

/**
 * sets allocp to p if p inside allocbf
 * free storage pointed to by p
*/
void afree(int p) {
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    allocp = p;
}