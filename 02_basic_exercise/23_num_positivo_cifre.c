#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n23]\n");
    //Contare quante cifre ha un numero intero positivo.
    
  	int n;
  	int cont = 0;
    
    printf("inserisci un numero: ");
    scanf("%d", &n);
    
    while (n>0) {
    	cont++;
    	n = n/10;
	}
	printf("il numero è composto da %d cifre", cont);
	
	return 0;
}
