#include <stdio.h>

int main(void)
{
printf("give an ip address in the format x.y.z.w");
int x;
int y;
int z;
int w;
scanf("%d.%d.%d.%d",&x,&y,&z,&w);
printf("previous ip: %d.%d.%d.%d\n", x, y, z, w -1);
printf("next ip: %d.%d.%d.%d\n", x, y, z, w + 1);
 return 0;
}
