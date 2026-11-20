#include <stdio.h>

int main(void)
{
    int n, p, d;

    do {
        printf("enter a number up to 5 digits: ");
        scanf("%d", &n);
    } while (n > 99999 || n < -99999);

    if (n < 0) {
        printf("minus ");
        n = -n;
    }
    if (n == 0) {
        printf("zero\n");
        return 0;
    }

    p = 1;
    while (p <= n / 10)         
        p *= 10;

    while (p > 0) {
        d = (n / p) % 10;
        switch (d) {
            case 0: printf("zero ");  break;
            case 1: printf("one ");   break;
            case 2: printf("two ");   break;
            case 3: printf("three "); break;
            case 4: printf("four ");  break;
            case 5: printf("five ");  break;
            case 6: printf("six ");   break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine ");  break;
        }
        p /= 10;
    }
    printf("\n");
    return 0;
}
