#include <stdio.h>
#define N 3
#define K 4
int main(void)
{
    int n[N][K],max,pos;
    for(int i = 0;i < N;i++){
        for(int j = 0 ;j<K;j++){
            printf("Give me a number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    
    for(int i = 0;i<N;i++){
        max=n[i][0];
        pos=0;
        for(int j = 1 ; j <K; j++){
            if(max < n[i][j]){
                max = n[i][j];
                pos = j;
            }
        }
        
        if(pos){
            
            for(int j =pos-1;j>=0 ;j--){
                n[i][j]= max;
                }
        }

        for(int j =0 ; j < K; j++){
            printf("%d ",n[i][j]);
        }    
        printf("\n");
    }

    return 0;
}
