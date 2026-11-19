#include <stdio.h>

#define wing 5
#define room 20

int main(void)
{
    int rooms[wing][room] = {{0}};
    int choice, w, r, booked, free;

    do {
        printf("1) Show free rooms\n");
        printf("2) Book a room\n");
        printf("3) Cancel a booking\n");
        printf("4) Exit\n");
        printf("Choice: "); 
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            for (w = 0; w < wing; w++) {
                printf("wing %d free rooms:", w + 1);
                for (r = 0; r < room; r++)
                    if (rooms[w][r] == 0)
                        printf(" %d", r + 1);
                printf("\n");
            }
            break;

        case 2:
            free = 0;
            for (w = 0; w < wing; w++)
                for (r = 0; r < room; r++)
                    if (rooms[w][r] == 0)
                        free++;

            if (free == 0) {
                printf("the hotel is full.\n");
                break;
            }

            booked = 0;
            do {
                printf("wing number [1-%d]: ", wing);
                scanf("%d", &w);
                if (w < 1 || w > wing) {
                    printf("invalid wing.\n");
                    continue;
                }
                for (r = 0; r < room && !booked; r++)
                    if (rooms[w - 1][r] == 0) {
                        rooms[w - 1][r] = 1;
                        booked = 1;
                        printf("booked room %d in wing %d.\n", r + 1, w);
                    }
                if (!booked)
                    printf("wing %d is full, try another.\n", w);
            } while (!booked);
            break;

        case 3:
            printf("wing number: ");
            scanf("%d", &w);
            printf("room number: ");
            scanf("%d", &r);
            if (w < 1 || w > wing || r < 1 || r > room)
                printf("invalid wing/room.\n");
            else if (rooms[w - 1][r - 1] == 0)
                printf("that room is not booked.\n");
            else {
                rooms[w - 1][r - 1] = 0;
                printf("booking cancelled.\n");
            }
            break;

        case 4:
            printf("goodbye.\n");
            break;

        default:
            printf("invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

