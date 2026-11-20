#include <stdio.h>

#define n 100
int main(void)
{
    int a[n], i, x, last = 0, count = 0;

    while (count < n) {
    printf("enter a number\n");
    scanf("%d", &x);

    if (count == 0 || x < last) {
        a[count++] = x;
    last = x;
    }
}
for(i = 0;  i < n; i++)
    printf("%d ", a[i]);
printf("\n");
    return 0;
}
