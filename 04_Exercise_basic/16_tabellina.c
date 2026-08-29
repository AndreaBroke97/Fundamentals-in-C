#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "");
	
	printf("\n[esercizio n16]\n");
	
	int num, limite, i;
	
	printf("inserisci il numero della tabellina: ");
	scanf("%d", &num);
	
	printf("fino a che numero vuoi arrivare? ");
	scanf("%d", &limite);
	
	for (i = 1; i <=limite; i++) {  				//for: "Ripeti..." (i = 1;: "...iniziando con il contatore i che vale 1..."
	printf("%d * %d = %d\n", num, i, num * i);	//i <= limite;: "...fintanto che i rimane minore o uguale al numero limite..."
													//i++): "...e alla fine di ogni giro, aumenta i di uno."
		
	}
	
return 0;
}
	
	
