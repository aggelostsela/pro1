
#include <stdio.h>
#define N 10
#define K 20

int main(void)
{
    int n[N][K], min[K], count;

    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < K; j++){
            do{
                printf("Give me a number 0-10 for %d row and %d column: ", i+1, j+1);
                scanf("%d", &n[i][j]);
            }while(n[i][j] < 0 || n[i][j] > 10);
        }
    }

    for(int j = 0; j < K; j++){
        count = 0;

        for(int i = 0; i < N-1; i++){
            count += n[i][j];
        }

        n[N-1][j] = 100 - count;
    }

    for(int j = 0; j < K; j++){
        min[j] = n[0][j];

        for(int i = 1; i < N; i++){
            if(min[j] > n[i][j]){
                min[j] = n[i][j];
            }
        }
    }

    for(int j = 0; j < K; j++){
        printf("Min of column %d is: %d\n", j+1, min[j]);
    }

    return 0;
}
