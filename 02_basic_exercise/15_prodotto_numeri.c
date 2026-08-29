#include <stdio.h>
#include <locale.h>

int main() {
setloale(LC_ALL, "");
	
	printf("\n[esercizio n15]\n");

    int n, i;
    long prodotto = 1; // Usiamo 'long' perché il fattoriale cresce velocemente!
	
	printf("inserisci un numero: ");
	scanf("%d", &n);
   
	for(i = 1; i <= n; i++){
	prodotto = prodotto * i;
	printf("Il risultato finale è: %ld\n", prodotto);
	}
	

    return 0;
}

