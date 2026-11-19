#include <stdio.h>

#define students 1000
#define grades 11
int main(void)
{
    int freq[grades] = {0}, i, g, max = 0;

    for (i = 0; i < students; i++) {
        do {
            printf("grade of student %d [0-10]: ", i + 1);
            scanf("%d", &g);
        } while (g < 0 || g > 10);
        freq[g]++;
    }
    for (i = 0; i < grades; i++) {
        printf("grade %d: %d times\n", i, freq[i]);
        if (freq[i] > max)
            max = freq[i];
    }
    printf("most frequent (%d times): ", max);
    for (i = 0; i < grades; i++)
        if (freq[i] == max)
            printf("%d ", i);
    printf("\n");
    return 0;
}
