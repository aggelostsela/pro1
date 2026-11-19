#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;

    do {
        printf("enter a positive number less than 20: ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 20);

    for (i = 1; i <= n; i++)         
        sum += (2 * i) * (2 * i);

    printf("Result = %d\n", sum);
    return 0;
}
