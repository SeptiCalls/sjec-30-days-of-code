#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LEN 2500

void swapc(char *a, char *b) {
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapd(double *a, double *b) {
    double tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    char sentence[MAX_LEN];
    fgets(sentence, MAX_LEN, stdin);
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++) if (isalnum(sentence[i])) count++;
    double frequency[26];
    for (int i = 0; i < 26; i++) {
        frequency[i] = 0;
        for (int j = 0; sentence[j] != '\0'; j++) if (toupper(sentence[j]) == (char) 65 + i) frequency[i]++;
        frequency[i] = frequency[i] / count * 100;
    }
    int min;
    char letters[26];
    for (int i = 0; i < 26; i++) letters[i] = (char) 65 + i;
    for (int i = 0; i < 26; i++){
        min = i;
        for (int j = i + 1; j < 26; j++) if (frequency[j] < frequency[min]) min = j;
        swapd(&frequency[min], &frequency[i]);
        swapc(&letters[min], &letters[i]);
    }
    for (int i = 25; i > 20; i--) printf("%c: %.1f%%\n", letters[i], frequency[i]);
    return 0;
}