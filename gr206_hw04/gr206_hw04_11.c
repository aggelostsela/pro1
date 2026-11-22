#include <stdio.h>

int main(void)
{
    int n;
    int temp, sum=0,d=0,power;
    do{
        printf("Give a number : ");
        scanf("%d",&n);
    }while(n<0);
    temp = n;
    while(temp>0){
        temp /=10;
        d++; //find how many numbers 
    }
    temp = n;
    while(temp>0){
        
        power = 1;
        for(int i = 0;i <d;i++){
            power *= temp%10;
        }
        sum +=power;
        temp /=10; // moves right
    }
    if(sum == n)
        printf("%d is an Armstrong number",n);
    else
     printf("%d is not an Armstrong number",n);
    return 0;
}
