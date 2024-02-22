#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze2(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main(int argc, char const *argv[])
{
    char s[] = "test";
    squeeze2(s, 't');
    printf("%s\n", s);
    return 0;
et to the full path of the compiler you are using to build your project.

For example:et to the full path of the compiler you are using to build your project.

For example:}