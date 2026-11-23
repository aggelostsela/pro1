#include <stdio.h>

#define N 10
int main(void)
{
    double g[N],a,b;
    int count = 0;
    for(int i = 0 ; i < N ; i++){
        printf("Give me students grade : ");
        scanf("%d",&g[i]);
    }
    do{
        printf("give range grade a-b : ");
        scanf("%d %d",&a,&b);
    }while (b < a);
    

    for(int i = 0 ; i < N ; i ++){
        if(g[i]>=a && g[i]<=b){
            count ++;
        }
    }   
    printf("%d",count);
    return 0;
}
