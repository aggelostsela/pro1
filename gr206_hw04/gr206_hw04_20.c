#include <stdio.h>

#define n 100
int main(void)
{
int a[n], last;

for (int i = 0; i < n; i++) {
   printf("give a nunber a[%d]: \n", i);
   scanf("%d", &a[i]);
}

last = a[n - 1];
for (int i = n - 1; i > 0; i--) 
    a[i] = a[i - 1];
a[0] = last;

for (int i = 0; i < n; i++) 
    printf("%d ", a[i]);
printf("\n");
    return 0;
}
