#include <stdio.h>

int main(void) {
        
    int x;
    printf("give amount of money in euro\n");
    scanf("%d", &x);
    printf("50 euros: %d\n",x / 50);
    x %= 50;
    printf("20 euros: %d\n", x / 20);
    x %= 20;
    printf("10 euros: %d\n", x / 10);
    x %= 10;
    printf("5 euros: %d\n", x / 5);
    x %= 5;
    printf("2 euros: %d\n", x / 2);
    x %= 2;
    printf("1 euro: %d\n", x);
        return 0;
}
