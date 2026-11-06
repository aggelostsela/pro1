#include <stdio.h>

int main(void)
{
double x,f;
printf("give x\n");
scanf("%lf", &x);
if (x < -5) {
    f = 8;
} else if ( x < 3) {
    f = 1/x;
}   else if (x < 12) {
    f = x * x - 4;
}
else {
    f = 6 / ((x - 14) * (x - 14));  
}
printf("f(%.2f) = %.2f\n", x, f);
    return 0;
}
