#include <stdio.h>

int main(void)
{
int num;
printf("enter an intager\n");
scanf("%d", &num);
num = ((num >> 1) & 1) + ((num >> 3) & 1) + ((num >> 5) & 1) + ((num >> 7) & 1);
printf("sum of bits at pos 2, 4, 6, 8: %d\n", num);
    return 0;
}
