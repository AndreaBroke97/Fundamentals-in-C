#include <stdio.h>

int main() { //inizio
	
	printf("\n[esercizio n3]\n");

	int a, b, c; //azione
	printf("inserisci tre numeri interi: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b && a >= c) { //condizione
		printf("il maggiore e %d\n", a);
	} else if (b >= a && b >= c) {
		printf("il maggiore e %d\n", b);
	}else{
		printf("il maggiore e %d\n", c);
	}
	return 0 ; //fine
}
