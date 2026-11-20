#include <stdio.h>

int main(void)
{
    int a,b,c;  
    
    printf("give a number : ");
    scanf("%d",&a);
    do{
    printf("Give a number smaller than the prev : ");
    scanf("%d",&b);
    }while(a <= b);
    do{
    printf("Again smaller than the prev: ");
    scanf("%d",&c);
    }while(b <= c);

    return 0;
}
