#include <stdio.h>

int main() {
	

	int num; 
	printf("\n[esercizio n1]\n");
	printf("scrivi un numero intero: ");
	scanf("%d", &num);
	
	if (num > 0){
		
		printf("%d e un numero positivo\n", num);
	
	} else if (num < 0) {
		printf("%d e un numero negativo\n", num);

	} else {
		printf("%d il numero e zero\n", num);
	}
		
	return 0;
}
