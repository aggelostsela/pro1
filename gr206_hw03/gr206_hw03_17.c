#include <stdio.h>

int main(void)
{
    int month, day, feb, dim;

    printf("give month (1-12): ");
    scanf("%d", &month);
    printf("give day: ");
    scanf("%d", &day);

    feb = 28;
    if (month == 1 || month == 2) {
        printf("how many days in february (28 or 29)? ");
        scanf("%d", &feb);
    }

    day += 50;

    switch (month) {
        case 2:
            dim = feb;
            break;
        case 4: 
            dim = 30;
            break;
        case 6: 
            dim = 30;
            break;
        case 9: 
            dim = 30;
            break;
        case 11:
            dim = 30;
            break;
        default:
            dim = 31;
    }
    if (day > dim) {
        day -= dim;
        month = month % 12 + 1;

        switch (month) {
            case 2:
                dim = feb;
                break;
            case 4:
                dim = 30;
                break;
            case 6:
                dim = 30;
                break;
            case 9:
                dim = 30;
                break;
            case 11:
                dim = 30;
                break;
            default:
                dim = 31;
        }
        if (day > dim) {
            day -= dim;
            month = month % 12 + 1;
        }
    }

    printf("%d/%d\n", month, day);

    return 0;
}
