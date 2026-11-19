#include <stdio.h>

#define n 100

int main(void)
{
    double theory[n], lab[n], final[n];
    int i, pass = 0, fail = 0;

    for (i = 0; i < n; i++) {
        do {
            printf("student %d theory grade [0-10]: ", i + 1);
            scanf("%lf", &theory[i]);
        } while (theory[i] < 0 || theory[i] > 10);

        do {
            printf("student %d lab grade [0-10]: ", i + 1);
            scanf("%lf", &lab[i]);
        } while (lab[i] < 0 || lab[i] > 10);

        final[i] = (theory[i] + lab[i]) / 2.0;
        if (final[i] >= 5)
            pass++;
        else
            fail++;
    }

    printf("passed: %d\nfailed: %d\n", pass, fail);
    return 0;
}
