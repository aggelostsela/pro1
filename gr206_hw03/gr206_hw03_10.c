#include <stdio.h>


int main () {
    unsigned int x ;
    int i;

    printf("Give a number and a number between 1-3 to move the bits\n");
    scanf("%u %d",&x,&i);
    x = (x >> (8*i) | x<<(32- 8*i));
    printf("New number : %u\n",x);
    
    
    
    return 0;
}
