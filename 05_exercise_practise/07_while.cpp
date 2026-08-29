#include <stdio.h>
/*
int main() {

int i = 0;

	while (i < 5) {
    printf("%d ", i);
    i++; // Incremento fondamentale per non creare un ciclo infinito!
}
// Output: 0 1 2 3 4
}*/

int main() {
    int n;

    printf("Insert a positive number: ");
    scanf("%d", &n);

    // 1. Controllo immediato: il numero è valido?
    if (n < 0) {
        // Se è negativo, stampo l'errore e basta
        printf("Error: you can't use a negative number\n");
    } 
    else {
        // 2. Se NON è negativo (else), allora faccio il countdown
        while (n >= 0) {
            printf("%d ", n);
            n--; // Decremento
        }
        printf("\nDone!\n");
    }

    return 0;
}
		


