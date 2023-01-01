#include <stdio.h>
#include <stdlib.h>
int main(void){
    short size;
    scanf("%hd", &size);
    short space;
    for (int i = 0; i < size; i++){
        space = size - i;
        for (int j = 0; j < space; j++) printf(" ");
        for (int j = 0; j < 2 * i; j++) (j % 2)? printf("#"): printf(" ");
        printf("\n");
    }
    for (int i = size; i > 0; i--){
        space = size - i;
        for (int j = 0; j < space; j++) printf(" ");
        for (int j = 0; j < 2 * i; j++) (j % 2)? printf("#"): printf(" ");
        printf("\n");
    }
    return 0;
}