#include <stdio.h>

int main(void)
{
int n1, n2, d1, d2, op;
printf("Δωσε αριθμητες (n1 n2):\n");
scanf("%d %d", &n1, &n2);
printf("Δωσε παρανομαστες (d1 d2): \n");
scanf("%d %d", &d1, &d2);
printf("Δώσε πράξη (1: +, 2: -, 3: *, 4: /): ");
scanf("%d", &op);
switch (op) {
    case 1:
         printf("(%d/%d)+(%d/%d)=%d/%d\n",n1, d1, n2, d2, n1 * d2 + n2 * d1, d1 * d2 );
    break;
    case 2:
        printf("(%d/%d)-(%d/%d)=%d/%d\n", n1, d1, n2, d2, n1 * d2 - n2 * d1, d1 * d2);
    break;
    case 3:
        printf("(%d/%d)*(%d/%d)=%d/%d\n", n1, d1, n2, d2, n1 * n2, d1 * d2);
     break;
    case 4:
        printf("(%d/%d)/(%d/%d)=%d/%d\n", n1, d1, n2, d2, n1 * d2, d1 * n2);              
     break;
    default:
         printf("Μη έγκυρη πράξη.\n");
        break;
}

    return 0;
}
