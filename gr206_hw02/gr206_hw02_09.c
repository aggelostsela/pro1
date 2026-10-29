#include <stdio.h>

int main(void)
{
int a, result;

printf("Enter a 2 digit positive number\n");
scanf("%d", &a);

result = (a / 10) * 1100  + (a % 10) * 11;
printf("%d",result);
    return 0;
}
