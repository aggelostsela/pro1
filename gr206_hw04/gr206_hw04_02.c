#include <stdio.h>

int main(void)
{
    int x, i, j;
    do {
        printf("enter a positive numer: ");
        scanf("%d", &x);
    } while (x <= 0);

    for (i = x; i >= 1; i--) {
        for (j = 0; j < x - i; j++) 
            printf(" ");
        for (j = 0; j < i; j++)          
            printf("*");
        printf("\n");
    }
    return 0;
}
