#include <stdio.h>

int contain(char s[], int c) {
    for(int i = 0; ; i++) {
        if (s[i] == c)
            return 1;
        else if (s[i] == '\0')
            return 0;
    }
}
/* squeeze: delete all c from s */
void squeeze2(char s1[], char s2[])
{
    int i, j;
    for (i = j = 0; s1[i] != '\0'; i++)
        if (!contain(s2, s1[i]))
            s1[j++] = s1[i];
    s1[j] = '\0';
}

int main(int argc, char const *argv[])
{
    char s1[] = "test";
    char s2[] = "toy";
    squeeze2(s1, s2);
    printf("%s\n", s1);
    return 0;
}