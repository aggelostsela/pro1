#include <stdio.h>

int main(void)
{
int oct, hex, dec;
printf("give a octadecimal number,a hexadecimal and a decimal\n");
scanf("%o%x%d", &oct, &hex, &dec);
printf("the sum is:%d\n", oct + hex + dec);
return 0;
}
