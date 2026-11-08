#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f;

    printf("Give MAC address: ");
    scanf("%x:%x:%x:%x:%x:%x", &a, &b, &c, &d, &e, &f);

    if (a == 255 && b == 255 && c == 255 && d == 255 && e == 255 && f == 255)
        printf("Broadcast\n");
    else if (a % 2 == 0)
        printf("Unicast\n");
    else
        printf("Multicast\n");

    return 0;
}
