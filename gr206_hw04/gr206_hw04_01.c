#include <stdio.h>
#define N 100
int main(void)
{
int sum = 0,num;
int count = 0;
while (sum <= N){   
    printf("Give an int : ");
    scanf("%d",&num);
    sum += num;
    count++;
    }
printf("It was added a total of %d times and the sum is : %d \n",count,sum);


    return 0;
}
