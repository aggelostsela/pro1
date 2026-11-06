#include <stdio.h>

int main(void)
{
int count = 1;
int previous, current;

printf("enter up to 100 integers (stops if the number is greater than the previous): \n");

printf("number 1: \n");
scanf("%d", &previous);
for (int i = 2; i <= 100; i++) {
   printf("Number %d: \n", i); 
   scanf("%d", &current);

   count++;

   if (current > previous) {
       break;
   }
   previous = current;
}
printf("total numbers entered: %d\n", count);
return 0;
}
