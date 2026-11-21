#include <stdio.h>
#define N 5
int main(void)
{
    double mo;
    int n[N],prev;
    int cp,cb;
   
    if(N-1 != 0){
    printf("Give me the last number : ");
    scanf("%d",&n[N-2]);
    }
    
    mo+=n[N-1];
    
    for(int i = 0; i<N-1;i++){
        printf("Give me a number for %d row : ",i+1);
        scanf("%d",&n[i]);
        mo+=n[i];
    }

    mo=(double)mo/N;
    prev=n[N-1];

    for(int i=0 ; i<N;i++){
        if(n[i]>prev)
            cp++;
        prev=n[i];
        if(n[i]>mo)
            cb++;
    }

    printf("Bigger than last : %d and bigger than mo : %d",cp,cb);
    
    return 0;
}
