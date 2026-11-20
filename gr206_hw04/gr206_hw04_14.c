#include <stdio.h>

#define n 5

int main(void)
{
    int x[n], y[n], i;

    for (i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++) {
        if (x[i] % 2 == 0)
            y[i] = x[i];
        else
            y[i] = 2 * x[i];
    }

    for (i = 0; i < n; i++)
        printf("%d ", y[i]);
    printf("\n");
    return 0;
}
