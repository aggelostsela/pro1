#include <stdio.h>

int main(void)
{
 int a, b, temp;
printf("give two 3 digit positive integers\n");
scanf("%d%d", &a , &b);
temp = a / 100;
a = (b % 10) * 100 + (a % 100);
b = (b / 10) * 10 + temp;

printf("new numbers%d %d\n", a, b);
return 0;
}
