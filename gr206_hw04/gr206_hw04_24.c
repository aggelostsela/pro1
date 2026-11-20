#include <stdio.h>

#define n 5
int main(void)
{
  int a[n][n], i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1)
                a[i][j] = 1;
            else if (i < j && i + j < n - 1)
                a[i][j] = 2;
            else if (i < j && i + j > n - 1)
                a[i][j] = 3;
            else if (i > j && i + j > n - 1)
                a[i][j] = 4;
            else
                a[i][j] = 5;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
