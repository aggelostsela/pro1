#include <stdio.h>

int main () {

   int h,m,s,temp;
   printf("Give the time : ");
   scanf("%d:%d:%d",&h,&m,&s);
   temp = h*3600 + m * 60 + s;
   temp = 86400 - temp;
   printf("Hours till midnight : %d:%d:%d",(temp/3600),((temp % 3600) / 60),(temp % 60));
       

    return 0;
}
