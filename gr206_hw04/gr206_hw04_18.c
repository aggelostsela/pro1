#include <stdio.h>

#define n 100
int main(void)
{
    int a[n], ok, max = 0, found = 0;

for (int i = 0; i < n; i++) {
    printf("give a number a[%d]: \n", i);
    scanf("%d", &a[i]);
}

for (int i = 1; i < n; i++) {
    ok = 1;
    for (int j = 0; j < i && ok; j++) {
        if(a[i] % a[j]  != 0){
            ok = 0;
        }
    }
    if (ok && (!found || a[i] > max)) {
            max = a[i];
            found = 1;
    }
}
    if (found)
        printf("largest such element: %d\n", max);
    else
        printf("no such element exists.\n");
    return 0;
}
