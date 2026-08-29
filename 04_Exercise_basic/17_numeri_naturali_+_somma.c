#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");
	
	printf("\n[esercizio n17]\n");
	
	int n, i;
    int sum = 0; // Fondamentale: creiamo il "sacco" e svuotiamolo (0)
    
    printf("Inserisci quanti numeri vuoi: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
        sum = sum + i; // AGGIORNATO: ora salviamo il calcolo in sum
    }
    
    // Stampiamo sum, non i!
    printf("\nLa loro somma totale è: %d\n", sum);

return 0;
}
