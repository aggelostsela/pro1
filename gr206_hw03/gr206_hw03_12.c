#include <stdio.h>

int main () {
    int g;
    printf("Give student grade : ");
    scanf("%d",&g );
    if(g > 18 && g <= 20){
        printf("Excellent");
    } else if (g > 16 && g <=18) {
        printf("Very good");
    } else if (g > 13 && g<=16){
        printf("Good");
    } else if ( g>=10 && g < 13  ){
        printf("Dangerous zone");
    } else {
        printf("Need Help");
    }


    return 0;
}
