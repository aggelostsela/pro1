#include <stdio.h>

int main(void)
{
    int x = 4;
    printf("%d %d %d %d %d %d %d %d %d %d\n", x >> 2, x >> 1, x, x << 1, x << 2, x << 3, x << 4, x << 5, x << 6, x << 7);  

    return 0;
}
