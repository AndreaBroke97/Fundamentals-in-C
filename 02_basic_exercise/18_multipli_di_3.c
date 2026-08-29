#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n18]\n");
    
    int count = 0;
    int i; // Questa sarà la nostra variabile di controllo nel ciclo

    // Il ciclo parte da 1 e arriva a 100
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            count++;
        }
    }
    
    printf("Tra 1 e 100 ci sono %d numeri multipli di 3.\n", count);

    return 0;
}
