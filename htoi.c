
#include <stdio.h>

int htoi(char s[]);

int main(int argc, char const *argv[])
{
    printf("%d\n", htoi("0xA12"));
    return 0;
}

/* Exercise 2-3. Hex to integer */
int htoi(char s[])
{
	int i, n;
	n = 0;
	for (i = 0; ; ++i) {
		if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X')) {
			i++;
			continue;
		}
		
		if (s[i] >= '0' && s[i] <= '9') {
			n = 16 * n + (s[i] - '0');
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			n = 16 * n + (s[i] - 'a' + 10);
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			n = 16 * n + (s[i] - 'A' + 10);
		} else {
			break;
		}
	}
	return n;
}