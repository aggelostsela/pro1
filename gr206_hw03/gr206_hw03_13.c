#include <stdio.h>

int main(void)
{
    double m3, cost;

    printf("Enter water consumption (m³ meters): ");
    scanf("%lf", &m3);
    cost = 10.0;
    if (m3 <= 30) {
        cost += m3 * 0.6;
    } else if (m3 <= 50) {
        cost += 30 * 0.6 + (m3 - 30) * 0.8;
    } else if (m3 <= 60) {
        cost += 30 * 0.6 + 20 * 0.8 + (m3 - 50) * 1.0;
    } else {
        cost += 30 * 0.6 + 20 * 0.8 + 10 * 1.0 + (m3 - 60) * 1.2;
    }

    printf("Total cost: %.2f euro\n", cost);

    return 0;
}
