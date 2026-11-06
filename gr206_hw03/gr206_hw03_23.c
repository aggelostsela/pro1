#include <stdio.h>

int main(void){
int a;

printf("give a number\n");
scanf("%d", &a);
if (a >= 10 && a <= 20) {
   for (int i = 0; i < a; i++) {
       printf("ole\n");
   }
}  else {
    int neg = 0, temp;
printf("give 5 numbers\n");
for (int i = 1; i <= 5; i++) {
    printf("number %d\n", i);
    scanf("%d", &temp);

if (temp < 0) {
    neg++;
}
}
printf("There were %d negative numbers inputted\n", neg);
}
 return 0;
}
