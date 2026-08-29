#include <stdio.h>

/* questo è un ciclo*/
int main() {
	           
	int i = 1;  /*numero è il valore */ 
	int n, quadrato;   
	
	printf("Inserisci il numero di righe: ");
	scanf("%d", &n);
	
	while (i <= n) {
		quadrato = i * i;                   
		printf("%d\n", quadrato);  
		i++;
	}
}
