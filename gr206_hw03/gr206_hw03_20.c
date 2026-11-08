#include <stdio.h>

int main() {
    double ar1, pa1, ar2, pa2;
    double ar, pa;
    int c;

    printf("Give 2 numerators:\n");
    scanf("%lf %lf", &ar1, &ar2);

    printf("Give 2 denominators:\n");
    scanf("%lf %lf", &pa1, &pa2);

    printf("Choose what to do:\n");
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");

    scanf("%d", &c);
    switch(c) {
        case 1:
            ar = ar1 * pa2 + ar2 * pa1;
            pa = pa1 * pa2;
            printf("(%g/%g)+(%g/%g)=%g/%g\n",ar1, pa1, ar2, pa2, ar, pa);
            break;
        case 2:
            ar = ar1 * pa2 - ar2 * pa1;
            pa = pa1 * pa2;
            printf("(%g/%g)-(%g/%g)=%g/%g\n",ar1, pa1, ar2, pa2, ar, pa);
            break;
        case 3:
            ar = ar1 * ar2;
            pa = pa1 * pa2;
            printf("(%g/%g)*(%g/%g)=%g/%g\n",ar1, pa1, ar2, pa2, ar, pa);
            break;
        case 4:
            ar = ar1 * pa2;
            pa = pa1 * ar2;
            printf("(%g/%g)/(%g/%g)=%g/%g\n",ar1, pa1, ar2, pa2, ar, pa);
            break;
        default:
            printf("Unknown value\n");
    }
    return 0;
}
