#include <stdio.h>

int main (){
/*    int a,total;
    printf("Give a number: \n");
    scanf("%d",&a);
    total = a/2%2 + a/8%2 + a/32%2 +a/128%2;
    printf("Total : %d\n",total);
    */  
int a; 
printf("give a number\n");
scanf("%d", &a);
a = ((a >> 1 & 1) + (a >> 3 & 1) + (a >> 5 & 1) + (a >> 7 & 1));
printf("sum: %d\n", a);
    return 0;
}
