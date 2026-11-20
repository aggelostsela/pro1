#include <stdio.h>
#define N 100
int main(void)
{
    double n,max1,max2;
    printf("give a number : ");
    scanf("%lf",&n);
    max1=n;
    for(int i =1;i<N ;i++){
        printf("give a number : ");
        scanf("%lf",&n);
        if(n > max1){
            max2 = max1;
            max1 = n ;
        } else if (n > max2){
            max2 = n;
        }
    }
    printf("First big : %f \n Second biggest : %f",max1,max2);
    return 0;
}
