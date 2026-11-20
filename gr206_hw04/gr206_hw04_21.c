#include <stdio.h>
#define N 1821
int main(void)
{
    int n[N],d =0,seen;
    for(int i = 0 ; i < N ; i ++){
        printf("Give me a number : ");
        scanf("%d",&n[i]);
    }
    for(int i=0 ; i < N;i++){
        seen = 0; 
        for(int j= 0; j<i;j++){
            if(n[i]==n[j]){
                seen++;
                break;
            }
        }
        if(seen){
            d++;
        }
        
    }
    printf("There are %d doubles",d);
    return 0;
}
