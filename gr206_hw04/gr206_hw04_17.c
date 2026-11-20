#include <stdio.h>

#define N 5
int main(void)
{
    int sym=1;
    double n[N];
    for(int i=0;i<N;i++){
        printf("Give a decimal number : ");
        scanf("%lf",&n[i]);
    }
    for(int i=0;i<N/2;i++){
        printf("%lf\n",n[N-i-1]);
        if(n[i]!= n[N-i-1]){
            sym=0;
            break;
        }
    }
    if(sym)
        printf("its symetric");
    else
        printf("its not symetric");
    return 0; // if N is odd then does not work bc it leaves 1 behind and its allways not symetic
}
