#include <stdio.h>

int main () {
    double a,b,c;
    printf("Give price of each item: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    (a>=100 || b>=100 || c>= 100) ?  printf("There are products over 100\n") :
    printf("None is over 100");
    return 0;
}
