#include <stdio.h>

int main() {
	
//Leggere un voto (0–30) e stampare “insufficiente”, “sufficiente”, “buono” o “ottimo”.
	int num; 
	printf("\n[esercizio n6]\n");
	
	int voto;
	
	
	printf("inserisci voto intero (0-30): ");
	scanf("%d", &voto);
	
	// 2. Ciclo WHILE per validazione
    // Finché il voto è minore di 0 OPPURE (||) maggiore di 30...
    while (voto < 0 || voto > 30) {
        printf("Errore! Il voto deve essere tra 0 e 30.\n");
        printf("Reinserisci voto: ");
        scanf("%d", &voto); // Aggiorniamo la variabile 'voto'
    }
	
// 3. Controlli IF corretti (Senza virgole!)
    // Nota: qui siamo sicuri che il voto è tra 0 e 30 grazie al while sopra.
    
    if (voto <= 17) {
        printf("%d e' un voto insufficiente\n", voto);

    } else if (voto <= 23) {
        // Se arriva qui, è sicuramente > 17
        printf("%d e' un voto sufficiente\n", voto);
    
    } else if (voto <= 27) {
        // Se arriva qui, è sicuramente > 23
        printf("%d e' un voto buono\n", voto);
    
    } else {
        // Se arriva qui, è per forza tra 28 e 30
        printf("%d e' un voto ottimo/eccellente\n", voto);
    }

    return 0;
}

