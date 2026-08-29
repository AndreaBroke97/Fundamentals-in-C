#include <stdio.h>

int main () {
	
	// printf("Nome: Andrea Barrano\n"); 
//	printf("Eta: 19 Anni\n");

//int anno_corrente = 2026;
//int eta = anno_corrente - anno_nascita;

//printf("quest'anno e il %d\n", anno_corrente);
//printf("sono nato il %d\n", anno_nascita);
//printf("ho %d anni\n", eta);
	

    // 1. Dichiara le variabili
    int base, altezza, area;
    // 2. Chiedi i valori con printf e scanf (niente \n dentro scanf!)
    printf("Inserisci la base e l'altezza separati da uno spazio: ");
    scanf("%d %d", &base, &altezza);
    // 3. Fai i calcoli qui (area = ... e perimetro = ...)
    area = base * altezza;
    // 4. Stampa i risultati
  printf("%d per %d risulta un'area di %d\n", base, altezza, area);
 
  

	return 0;
}
