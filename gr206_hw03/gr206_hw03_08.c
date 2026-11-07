#include <stdio.h>

int main (){
    int a,total;
    printf("Give a number: \n");
    scanf("%d",&a);
    total = a/2%2 + a/8%2 + a/32%2 +a/128%2;
    printf("Total : %d\n",total);
    
    


    return 0;
}
