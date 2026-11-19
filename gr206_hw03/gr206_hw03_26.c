#include <stdio.h>

int main() {
    int num, pre;
    int count = 0;

    printf("Give number 1: ");
    scanf("%d", &pre);

    for (int i = 2; i <= 10; i++) {
        printf("Give number %d: ", i);
        scanf("%d", &num);
        if (num - pre == 1 || pre - num == 1) {
            count++;
        }
        pre = num;
    }

    printf("Consecutive pairs: %d\n", count);

    return 0;
}
