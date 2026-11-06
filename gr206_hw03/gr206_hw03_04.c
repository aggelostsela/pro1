#include <stdio.h>

int main () {

    int a,b,temp;
    
    printf("Give 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("Moved numbers : %d || %d",((b%10 * 100) + (a %100 )) , ((b/10 * 10) + (a/100)));

   


}
