#include <stdio.h>

int main(void)
{
unsigned int a,b,c,d,e,f;
printf("give mac address (x:x:x:x:x:x):\n");
scanf("%x:%x:%X:%x:%x:%x", &a, &b, &c, &d, &e, &f);
printf("the mac address %02X:%02X:%02X:%02X:%02X:%02X is:\n",a ,b,c,d,e,f);
if (a == 0xFF && b == 0xFF && c == 0xFF && d == 0xFF && e == 0xFF && f == 0xFF) {
    printf("broadcast.\n");
} else if (a % 2 ==0) {
    printf("unicast.\n");
} else {
    printf("multicast.\n");
}
return 0;
}
