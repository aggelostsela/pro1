#include <stdio.h>

int main(void)
{
int a, b;

printf("Enter two positive integers: \n");
scanf("%d%d", &a, &b);

a = a - (a/b)*b;

printf("remainder is:%d", a);
    return 0;
}
