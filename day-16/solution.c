#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, n, max = 0, temp;
    scanf("%d%d", &n, &m);
    int cherries[n];
    for (int i = 0; i < n; i++) scanf("%d", &cherries[i]);
    for (int i = 0; i <= n - m; i++) {
        temp = 0;
        for (int j = i; j < i + m; j++) temp += cherries[j];
        max = (temp > max)? temp: max;
    }
    printf("Max cherries: %d\n", max);
    return 0;
}