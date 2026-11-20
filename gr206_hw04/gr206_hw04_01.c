#include <stdio.h>
#define N 100
int main(void)
{
int i,sum = 0,num;
int count = 0;
for(i =0 ;i <N ; i++){
    
    printf("Give an int : ");
    scanf("%d",&num);
    
    sum += num;
    
    if (sum >N && count ==0){
        count = 1;
        printf("It was added %d times and the sum is : %d so far\n",i+1,sum);
    }
    }
printf("It was added a total of %d times and the sum is : %d \n",i,sum);


    return 0;
}
