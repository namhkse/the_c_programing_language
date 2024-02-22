#include <stdio.h>

void strcat2(char *, char *);
void strcat3(char[], char[]);

int main(int argc, char const *argv[])
{
    char one[20] = "one";
    char two[] = "two";
    strcat2(one, two);

    printf("%s\n", one);

    return 0;
}

/* strcat: concatenate t to end of s; s must be big enough */
void strcat3(char s[], char t[])
{
    int i = 0;
    int j = 0;
    while (s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ; /* copy t */
}

/* strcat: version pointer */
void strcat2(char *s, char *t)
{
    while (*s)
        s++;

    while (*t)
    {
        *s = *t;
        t++;
        s++;
    }
}