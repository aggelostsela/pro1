#include <stdio.h>

int main() {
    int type, kyv, days;
    int price;
    double total;
    char ins;

    printf("Choose vehicle type:\n");
    printf("1. Motorcycle\n");
    printf("2. Car\n");
    scanf("%d", &type);

    printf("Give CC of the vehicle:\n");
    scanf("%d", &kyv);

    printf("Give rental days:\n");
    scanf("%d", &days);
    switch(type) {
        case 1:
            if (kyv <= 100) {
                switch(days) {
                    case 1:
                    case 2:
                        price = 30;
                        break;
                    case 3:
                    case 4:
                    case 5:
                        price = 25;
                        break;
                    default:
                        price = 20;
                }
            }
            else {
                switch(days) {
                    case 1:
                    case 2:
                        price = 40;
                        break;
                    case 3:
                    case 4:
                    case 5:
                        price = 35;
                        break;
                    default:
                        price = 30;
                }
            }
            break;

        case 2:
            if (kyv <= 1000) {
                switch(days) {
                    case 1:
                    case 2:
                        price = 60;
                        break;
                    case 3:
                    case 4:
                    case 5:
                        price = 55;
                        break;
                    default:
                        price = 50;
                }
            }
            else {
                switch(days) {
                    case 1:
                    case 2:
                        price = 80;
                        break;
                    case 3:
                    case 4:
                    case 5:
                        price = 70;
                        break;
                    default:
                        price = 60;
                }
            }
            break;

        default:
            printf("Wrong vehicle type!\n");
            return 0;
    }

    total = price * days;

    printf("Do you want insurance? (Y/N):\n");
    scanf(" %c", &ins);

    if (ins == 'Y' || ins == 'y') {
        total = total * 1.05;
    }

    printf("Price per day: %d \n", price);
    printf("Total rental cost: %.2f\n", total);

    return 0;
}

