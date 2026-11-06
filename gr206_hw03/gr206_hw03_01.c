#include <stdio.h>

int main(void) {
        
    double cost, total;
    printf("Give total cost\n");
    scanf("%lf", &cost);
   total = cost - cost* 0.05 * (cost >= 100);
   printf("total cost is :  %.2f\n",total);
        return 0;
}
