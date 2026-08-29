#include <stdio.h>

int main() {
    int numero;
    int somma = 0; 

    printf("Inserisci un numero (0 per finire): ");
    scanf("%d", &numero);

    while (numero != 0) {
        // Qui eseguiamo la vera e propria somma matematica!
        somma = somma + numero; 
        
        // Chiediamo il prossimo numero
        printf("Inserisci un altro numero: ");
        scanf("%d", &numero);
    }

    // Questa riga viene eseguita SOLO quando il ciclo finisce (cioè quando numero == 0)
    printf("La somma totale e': %d\n", somma);

    return 0;
}
