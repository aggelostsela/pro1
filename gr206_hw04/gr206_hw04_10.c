#include <stdio.h>

int main(void)
{
    int a, b, i, sumA = 0, sumB = 0;

    do {
        printf("enter two positive numbers: ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0);

    for (i = 1; i <= a / 2; i++)     
        if (a % i == 0)
            sumA += i;

    for (i = 1; i <= b / 2; i++)     
        if (b % i == 0)
            sumB += i;

    if (sumA == b && sumB == a)
        printf("%d and %d are amicable numbers.\n", a, b);
    else
        printf("%d and %d are not amicable numbers.\n", a, b);

    return 0;
}
