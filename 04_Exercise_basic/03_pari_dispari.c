#include <stdio.h>

int main() {
	printf("\n[esercizio n4]\n");
	
	int num1;
	printf("inserisci il numero intero: ");
	scanf("%d", &num1);
	
	if(num1 % 2 == 0){ //se num1(valore) diviso 2 uguale a 0 stampa pari
		printf("%d e un numero pari.\n", num1);
	}else{
		printf("%d e un numero dispari.\n", num1);
	}
	return 0;
}
