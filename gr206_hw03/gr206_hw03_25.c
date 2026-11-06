#include <stdio.h>

int main(void)
{
int count = 0;
printf("three digit numbers matching the criteria: \n");

for (int i = 1000; i  <= 999; i ++) {
   if ( i % 3 != 0 && i % 5 != 0 && i % 10  != 7) {
       printf("%d ", i);
       count++;
   } 
}
print("total count of numbers: %d", count);
    return 0;
}
