#include <stdio.h>
#define N 100
int main(void)
{
    double n,max1,max2 = 0;
    int have = 0;
    printf("give a number : ");
    scanf("%lf",&n);
    max1=n;
    for(int i =1;i<N ;i++){
        printf("give a number : ");
        scanf("%lf",&n);
        if(n > max1){
            max2 = max1;
            have = 1;
            max1 = n ;
        } else if (n < max1 &&(!have ||  n > max2)){
            max2 = n;
            have = 1;
        }
    }
    if(have)
    printf("First big : %.2f \n Second biggest : %.2f",max1,max2);
    else
        printf("all numbers are equal, no different numbers\n");
    return 0;
}
