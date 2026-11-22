#include <stdio.h>

#define N 2
int main(void)
{
    int n[N][N],upper=1,lower=1;
    for(int i = 0 ;i<N ; i ++){
      for(int j = 0;j<N;j++){
            printf("Give me a number for %d row and %d column : ",i+1 , j+1);
            scanf("%d",&n[i][j]);
        }
    }
    for(int i = 0 ; i < N; i++){
        for(int j = 0 ; j < N ; j++){
            if(i < j && n[i][j]!=0){
                    upper=0;
                    break;

                }
            }
        }


    for(int i = 0 ; i < N; i++){
        for(int j = 0 ; j < N ; j++){
            if (i > j && n[i][j]!=0){
                    lower=0;   
                    break;
                }
                
                }
            }

    if(upper && lower)
        printf("The array is upper and lower triangylar");
    else if(upper)
        printf("The array is upper triangylar");
    else if (lower)
        printf("The array is lower triangylar");
    else
        printf("The array is neither upper nor lower triangylar");

    return 0;
}
