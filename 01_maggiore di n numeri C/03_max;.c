#include <stdio.h>

int main() {
    int a = 10;
    int b =  5;
    int c = 20;
    int max;

    // 1. Iniziamo ipotizzando che 'a' sia il maggiore
    max = a;

    // 2. Controlliamo se 'b' è più grande del massimo attuale
    if (b > max) {
        max = b;
    }

    // 3. Controlliamo se 'c' è più grande del massimo attuale
    if (c > max) {
        max = c;
    }

    printf("Il numero maggiore tra %d, %d e %d e': %d\n", a, b, c, max);

    return 0;
}
