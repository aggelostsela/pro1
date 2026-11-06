#include <stdio.h>

int main(void)
{
    double grade;
    printf("enter grade (0-20): ");
    scanf("%lf", &grade);
    if (grade > 18) {
        printf("Excellent\n");
    } else if (grade > 16) {
        printf("Very Good\n");
    } else if (grade > 13) {
        printf("Good\n");
    } else if (grade >= 10) {
        printf("Dangerous Zone\n");
    } else {
        printf("Need Help\n");
    }
    return 0;
}
