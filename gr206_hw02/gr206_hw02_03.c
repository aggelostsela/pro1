#include <stdio.h>

int main(void)
{
printf("give 3 real numbers (a,b,c)\n");
double a, b, c, temp;
scanf("%lf%lf%lf", &a, &b, &c);
temp = c;
c = b; 
b = a;
a = temp;
printf("a = %.1f,b = %.1f, c = %.1f\n", a, b, c);
    return 0;
}
