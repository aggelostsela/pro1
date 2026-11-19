#include <stdio.h>

int main(void)
{
    int x, count = 0;
    double sum = 0.0, klasma = 5.0 / 3.0;

    do {
        printf("enter a positive number: ");
        scanf("%d", &x);
    } while (x <= 0);

    while (sum + klasma < x) {
        sum += klasma;
        count++;
        klasma *= 5.0 / 3.0;
    }

    printf("last acceptable sum = %f with %d terms\n", sum, count);
    return 0;
}
