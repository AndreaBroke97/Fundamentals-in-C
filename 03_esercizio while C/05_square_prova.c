#include <stdio.h>

int main() {
	
	int i=1; //int(intero) diamo un valore di 1 a i
	int n, square; //la n memorizza il numero che l'utente inserisce, e square serve per memorizzare il quadrato di i

	printf("inserisci il numero di righe:"); //stampa, contenuto
	scanf("%d", &n); //prendi il valore che l'utente inserisce, & salvalo in n
	
	while (i<=n); //finchè i è minore uguale ad "n" continua il ciclo.
	square = i * i; // square è uguale ad i * i per poter eseguire il ciclo 1x1, 2x2, 3x3 ed eseguire la somma al quadrato.
	printf("%d\n", square); //stampa il risultato %d e vai a capo \n, square.
	i++;  // i++; serve a dare un limite, senza quello continua all'infinito

	
	
	
	return 0;
}
