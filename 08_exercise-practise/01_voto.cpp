#include <stdio.h> 

// Leggere un voto (0–30) e stampare “insufficiente”, “sufficiente”, “buono” o “ottimo”.

int main() {
	
	int voto;
	
	printf("insert the vote: ");
	scanf("%d", &voto);
	
	if (voto <= 14) {
		printf("%d e insufficente", voto);
	} else if (voto <= 17) {
		printf("%d e sufficente", voto);
	} else if (voto <= 25) {
		printf("%d e buono", voto);
	} else if (voto <= 30) {
		printf("%d e ottimo", voto);
	} else {
		printf("non valido");
	}
	return 0;
}
