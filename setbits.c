#include <stdio.h>

void printBinary(int number);
unsigned setbits(unsigned x, int p, int n, int y);

int main(int argc, char const *argv[])
{
    // int n = setbits(6, 2, 2);
    // printBinary(6);
    printBinary(~0);
    return 0;
}

unsigned setbits(unsigned x, int p, int n, int y)
{
    return 0;
    /*
        1110 2 2 0001 => 1010
        x = x & (~((~(~0 << n)) << p));
        1110 & (~((~(~0 << 2)) << 2));
        1110 & (~((~(100)) << 2));
        1110 & (~((011) << 2));
        1110 & (0011);
        0010

        y = (y & (~(~0 << n))) << p;

        
    */
}

// Function to print integer in binary format
void printBinary(int number)
{
    if (number == 0)
    {
        printf("0");
        return;
    }

    // Mask to extract each bit
    int mask = 1 << (sizeof(int) * 8 - 1);

    // Iterate over each bit and print
    for (int i = 0; i < sizeof(int) * 8; ++i)
    {
        printf("%d", (number & mask) ? 1 : 0);
        number <<= 1; // Shift number left by 1
    }
    printf("\n");
}