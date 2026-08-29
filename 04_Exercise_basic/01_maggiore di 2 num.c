#include <stdio.h>

int main() {
	
	int a, b;
	
	printf("\n[esercizio n 2]\n");
	printf("inserisci due numeri interi: ");
	scanf("%d %d", &a, &b);
	
	if (a > b) {
		printf("%d e maggiore di %d\n", a, b);
	} else if (b > a) {
		printf("%d e maggiore di %d\n", a, b);
	}else{
		printf("i numeri sono uguali");
	}
	
	

	return 0;
}
