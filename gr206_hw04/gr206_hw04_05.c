#include <stdio.h>

int main(void)
{
    int n;
    double sum=0;
    do{
        printf("Give a number : ");
        scanf("%d",&n);
    }while(n < 3 || n%2==0);   
    for(int i = 1;i <=n-2; i+=2){
        sum += 1.0 / (i*(i+2));
    }
    printf("sum is : %.6f\n",sum);

    return 0;
}
