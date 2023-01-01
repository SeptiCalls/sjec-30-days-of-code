#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, m, range;
    scanf("%d%d", &m, &n);
    range = n - m;
    int primes[range], count, k = 0;
    for (int i = m; i <= n; i++){
        count = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0) count++;
        }
        if (count == 2) primes[k++] = i;
    }
    for (int i = 0; i < k - 1; i++){
        printf("%d - %d : %d\n", primes[i], primes[i + 1], (primes[i + 1] - primes[i] - 1));
    }
    return 0;
}