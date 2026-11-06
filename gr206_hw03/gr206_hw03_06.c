#include <stdio.h>

int main () {
    int key, num, enc, dec;
    printf("Give encryption key : \n");
    scanf("%d",&key);
    printf("Give number to encrypt : \n");
    scanf("%d",&num);
    enc = key ^ num;
    printf("The encrypted number is : %d\n",enc);
    dec = enc ^ key;
    printf("The decrepted number is : %d\n",dec);
    return 0;
}
