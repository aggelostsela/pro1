#include <stdio.h>
#define N 5 
#define K 10
int main(void)
{
    int n[N][K],min[N],count;
    for(int i = 0 ; i <N;i++){
        for(int j = 0 ; j < K-1;j++){
            do{
                printf("Give me a number 0-10 for %d row and %d column : ",i+1,j+1);
                scanf("%d",&n[i][j]);
            }while(n[i][j] <0 || n[i][j] > 10);
        }
        

    }
    for(int i = 0 ; i<N;i++){
        count =0;
        min[i]=n[i][0];
        for(int j = 0 ;j<K-1; j++){
            count += n[i][j];
        }
        n[i][K-1] = 100 - count;
    }
    for(int i=0;i<N;i++){
        for(int j = 0 ; j<K;j++){
            printf("%d ",n[i][j]);
            if(min[i] > n[i][j])
                min[i] = n[i][j];
        }
        printf("\n");
    }
    for(int i = 0 ;i<N ;i++){
        printf("Min of row %d is : %d\n",i+1,min[i]);
    }
    return 0;
}
