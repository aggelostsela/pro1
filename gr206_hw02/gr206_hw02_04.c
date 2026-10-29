#include <stdio.h>

int main(void)
{
printf("give ages of dad and son\n");
int dad, son, years;
scanf("%d%d",&dad, &son);

years = dad - 2*son;

printf("In %d years the father will be twice as old as the son\n", years);
printf("dad's age then:%d\n", dad + years);
printf("son's age then:%d\n", son + years);
    return 0;
}
