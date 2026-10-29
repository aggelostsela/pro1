#include <stdio.h>

int main(void)
{
long int s, f, sr, fr, ts;
    printf("give number of successful and failed students \n");
    scanf("%ld %ld",&s,&f);
    ts = s + f;
    sr = s*100/ts;
    fr = f*100/ts;
    printf("sr: %ld || fr: %ld\n",sr,fr);
return 0;
}
