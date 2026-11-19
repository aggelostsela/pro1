#include <stdio.h>

int main(void)
{
    int count =0;
    double h,nh ,m;
    do{
    printf("give height of ball : ");
    scanf("%lf",&h);
    }while(h <= 0);
    nh = h  ;
    do {
    printf("give the decrease rate : ");
    scanf("%lf",&m );
    }while(m<=0 || m >1);
    do{
        nh = nh*(1.0-m); 
        count++;
        //printf("%.6f\n",nh);
    }while(nh >= h/4.0 );
    printf("It took %d to step bellow the 1/4 of the height",count);
    return 0;
}
