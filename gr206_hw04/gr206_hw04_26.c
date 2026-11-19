#include <stdio.h>

#define n 30

int main(void)
{
    int a[n][n], i, j, tmp;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < n; i++) 
        for (j = i + 1; j < n; j++) {
            tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

