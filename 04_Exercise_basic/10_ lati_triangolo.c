#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");
	
	printf("\n[esercizio n10]\n");
	
	int A, B, C;
	
	// 1. Lettura dei dati
    printf("Inserisci il primo lato: ");
    scanf("%d", &A);

    printf("Inserisci il secondo lato: ");
    scanf("%d", &B);
    
    printf("Inserisci il terzo lato: ");
    scanf("%d", &C);
	
	if (A + B > C && A + C > B && B + C > A){
	// Entra qui SOLO se tutte e tre sono vere
    printf("È un triangolo!\n");
	} else {
    // Entra qui se anche solo UNA delle tre è falsa
    printf("NON è un triangolo.\n");
	}
	
	

	return 0;
}
	
