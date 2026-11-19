#include <stdio.h>
#define N 10
int main(void)
{
    int count=0;
    double c,n[N],min;
    while(1){
        do {
            printf("Give me a number > 5 : ");
            scanf("%lf",&c);
        }while(c <= 5.0 && c!= -1.0);
        
        if(c==-1.0 || count == N-1)
            break;
        if(count==0)
            min = c;
        else if (min > c)
            min = c;

        n[count]=c;
        count++;
    }    
    if(count)
        printf("Min is : %.f \n",min);
    else
     printf("There is no min number");

    

    

    return 0;
}
