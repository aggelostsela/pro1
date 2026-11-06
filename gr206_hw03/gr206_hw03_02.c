#include <stdio.h>

int main(){

    int ap,ac;
    double pp,pc,g,totalp;

    printf("Give plate amount and price : \n");
    scanf("%d %lf",&ap,&pp);
    printf("Give cup amount and price\n");
    scanf("%d %lf",&ac,&pc);
    printf("Give amount given : \n");
    scanf("%f",&g);
    totalp = ap*pp + ac*pc - g ;
    printf("Change is %.2f",totalp);




return 0;
}
