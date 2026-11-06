#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter a four-digit number: ");
    scanf("%d", &a);

    printf("Enter a one-digit number: ");
    scanf("%d", &b);

    a = (a / 100) * 1000 + b * 100 + a % 100;
    printf("New value of a: %d\n", a);
        return 0;
}
