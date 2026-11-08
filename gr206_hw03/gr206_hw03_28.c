#include <stdio.h>

int main() {
    int num;
    int count = 0;

    for (int i = 1; i <= 10; i++) {

        printf("Give a positive number: ");
        scanf("%d", &num);

        while (num <= 0) {

            if (num < 0) {
                count++;
            }

            printf("Give a positive number: ");
            scanf("%d", &num);
        }
    }

    printf("Negative numbers entered: %d\n", count);

    return 0;
}
