#include <stdio.h>

int main(void)
{
  double p1, p2, p3;

    printf("give product prices: ");
    scanf("%lf %lf %lf", &p1, &p2, &p3);
    (p1 > 100 || p2 > 100 || p3 > 100) ? printf("atleast one product costs  100 euro.\n") : printf("no products that costs over 100 euro.");
    return 0;
}
