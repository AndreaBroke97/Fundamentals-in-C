#include <stdio.h>

/* int main() {
	
	printf("\n[esercizio n14]\n");
	
	int num = 1;
	
	int n;
	printf("inserisci un numero intero: ");
	scanf("%d", &n);
	
	int sum = num + n;
	printf("%d + %d = %d\n", sum, num, n); 
return 0 ;
} */
	
	#include <stdio.h>

int main() {
    printf("\n[esercizio n14]\n");

    int n;
    int somma = 0; // Inizializziamo a 0 perché aggiungeremo i numeri uno a uno

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    // Il ciclo parte da 1 e arriva fino a n
    for (int i = 1; i <= n; i++) {
        somma = somma + i; // Aggiunge il valore corrente di i alla somma totale
    }

    printf("La somma dei numeri da 1 a %d e': %d\n", n, somma);

    return 0;
}

