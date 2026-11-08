#include <stdio.h>

int main() {
    double a, b, step;
    double km;

    printf("Enter starting and finished miles: \n");
    scanf("%lf %lf", &a, &b);

    printf("Enter step: ");
    scanf("%lf", &step);

    printf("MILES       KLM\n");
    printf("------------------------\n");

    for (double i = a; i <= b; i = i + step) {
        km = i * 1.6;

        printf("%.2f       %.2f\n", i, km);
    }

    return 0;
}
