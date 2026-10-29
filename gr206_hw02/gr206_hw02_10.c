#include <stdio.h>

int main(void)
{
int sec;

printf("Enter a number of seconds\n");
scanf("%d", &sec);

printf("%dh %dm %ds\n", sec / 3600, (sec % 3600) / 60, sec % 60);
    return 0;
}
