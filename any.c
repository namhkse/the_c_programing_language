#include <stdio.h>

/**
 * Exercise 2-5.
 * Expected:
 * p: 0
 * p: 1
 * p: 2
 * p: -1
 */

int any(char[], char[]);

int main(int argc, char const *argv[])
{
    int p;
    p = any("test", "test");
    printf("p: %d\n", p);

    p = any("test", "es");
    printf("p: %d\n", p);

    p = any("test", "s1");
    printf("p: %d\n", p);

    p = any("test", "123");
    printf("p: %d\n", p);
    return 0;
}

/* any: return the first location in the string s1 where any character from the string s2 occurs */
int any(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
                return i;
        }
    }
    return -1;
}