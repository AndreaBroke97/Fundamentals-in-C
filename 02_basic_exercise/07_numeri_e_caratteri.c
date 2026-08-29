#include <stdio.h>

int main() {
	
	printf("\n[esercizio n7]\n");
	

    double n1, n2, risultato;//float memorizza numeri con le virgole: 1,5 
    char operazione; //char = carattere, memorizza un singolo carattere
   

    // Chiede all'utente di inserire i dati
    // Formato richiesto: numero operatore numero (es: 10 + 5)
    printf("Inserisci l'operazione (es. 10 + 5): ");
    scanf("%lf %c %lf", &n1, &operazione, &n2);

    // Inizia il controllo tramite switch
    switch (operazione) {
        case '+':
            risultato = n1 + n2;
            printf("Risultato: %.2lf\n", risultato);
            break;

        case '-':
            risultato = n1 - n2;
            printf("Risultato: %.2lf\n", risultato);
            break;

        case '*':
            risultato = n1 * n2;
            printf("Risultato: %.2lf\n", risultato);
            break;

        case '/':
            // Controllo per evitare la divisione per zero
            if (n2 != 0) {
                risultato = n1 / n2;
                printf("Risultato: %.2lf\n", risultato);
            } else {
                printf("Errore: Non puoi dividere per zero!\n");
            }
            break;

        // Questo scatta se l'utente inserisce un carattere diverso (+, -, *, /)
        default:
            printf("Errore: Operatore '%c' non riconosciuto.\n", operazione);
    }

    return 0;
}
 
