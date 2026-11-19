#include <stdio.h>

#define row 300
#define colm 500

int main(void)
{
    int a[row][colm];
    int i, j, k, unique;

    for (i = 0; i < row; i++)
        for (j = 0; j < colm; j++)
        {
            printf("enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    for (j = 0; j < colm; j++)
    {
        unique = 1;
        for (i = 0; i < row - 1 && unique; i++)
            for (k = i + 1; k < row; k++)
                if (a[i][j] == a[k][j])
                {
                    unique = 0;
                    break;
                }
        if (unique)
        {
            printf("olumn %d: ", j + 1);
            for (i = 0; i < row; i++)
                printf("%d ", a[i][j]);
            printf("\n");
        }
    }

    return 0;
}
