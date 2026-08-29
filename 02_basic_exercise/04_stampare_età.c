#include <stdio.h>

int main() {
	
	printf("\n[esercizio n5]\n");
	
	int eta_amica;
	printf("Inserisci l'eta': ");
	scanf("%d", &eta_amica);
	
	if(eta_amica < 18) {
		printf("ha %d anni, e' minorenne", eta_amica);
	}else if (eta_amica >= 18) {
		printf("ha %d anni, e' maggiorenne", eta_amica);
	}else if (eta_amica >= 65) {
		printf("ha %d anni, e' anziana", eta_amica);
	}
	
	
	
	
	return 0;
}
