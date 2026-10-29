#include <stdio.h>

int main(void)
{
int a;

printf("Enter a 2 digit positive number\n");
scanf("%d", &a);
printf("%d%d\n", a % 10, a / 10);

    return 0;
}
