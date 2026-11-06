#include <stdio.h>

int main(void)
{
    int a, b, c, choice, count;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (a != b && a != c && b != c) {
                printf("all three integers are different\n");
            } else {
                printf("the integers are not all different\n");
            }
            break;
        case 2:
            if (a == b || a == c || b == c) {
                printf("there are two equal integers\n");
            } else {
                printf("there are no two equal integers\n");
            }
            break;
        case 3:
            count = (a >= -5 && a <= 5) + (b >= -5 && b <= 5) + (c >= -5 && c <= 5);
            printf("%d integer(s) belong to [-5, 5]\n", count);
            break;
        default:
            printf("Invalid choice, please enter 1, 2 or 3\n");
    }

    return 0;
}
