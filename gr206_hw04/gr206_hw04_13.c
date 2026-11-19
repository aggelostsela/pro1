#include <stdio.h>

int main(void)
{
    int g[10],a,b,count = 0;
    for(int i = 0 ; i < 10 ; i++){
        printf("Give me students grade : ");
        scanf("%d",&g[i]);
    }
    do{
        printf("give range grade a-b : ");
        scanf("%d-%d",&a,&b);
    }while (b < a);
    
    for(int i = 0 ; i < 10 ; i ++){
        if(g[i]>=a && g[i]<=b){
            count ++;
        }
    }   
    printf("%d",count);
    return 0;
}
