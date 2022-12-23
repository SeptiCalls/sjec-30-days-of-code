#include <stdio.h>
#include <stdlib.h>

int largest(int a, int b, int c){
    int l = (a > b) ? a : b;
    l = (c > l) ? c : l;
    return l;
}

int smallest(int a, int b, int c){
    int s = (a < b) ? a : b;
    s = (c < s) ? c : s;
    return s;
}

int main(void){
    int A, B, C;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d%d%d", &A, &B, &C);
        if (i % 3 == 0){
            printf("%d\n", smallest(A, B, C));
        }
        if (i % 3 == 1){
            printf("%d\n", A + B + C - smallest(A, B, C) - largest(A, B, C));
        }
        if (i % 3 == 2){
            printf("%d\n", largest(A, B, C));
        }
    }
    return 0;
}