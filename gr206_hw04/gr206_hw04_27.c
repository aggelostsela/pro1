#include <stdio.h>

#define N 5
#define K 4
int main(void)
{
    int n[N][N],c;
    int o[K][K],ii=0,jj;

    for(int i =0;i<N;i++){
        for(int j =0;j < N;j++){
            printf("Give me a number for %d row and %d column : ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    do{
        printf("Gime me a number from 1-5 : ");
        scanf("%d",&c);
    }while(c<1 || c>5);

    for(int i = 0 ;i<N;i++){
        if(i == c-1)
            continue;
        jj=0;
        for(int j = 0 ; j<N;j++){
            if(j==c-1)
                continue;
            o[ii][jj]=n[i][j];
            jj++;
        }
        ii++;
    }
    for(int i=0;i<K;i++){
        for(int j=0;j<K;j++){
            printf("%d ",o[i][j]);
        }
        printf("\n");
    }
    return 0;
}
