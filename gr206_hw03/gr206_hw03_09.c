#include <stdio.h>

int main(void)
{
    unsigned int x;
    int count = 0;
    printf("Enter a positive integer: ");
    scanf("%u", &x);

    for (int i = 0; i < 32; i++) {
        count += (x >> i) & 1;
    }

    printf("Number of bits equal to 1: %d\n", count);

    return 0;
}
