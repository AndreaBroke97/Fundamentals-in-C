#include <stdio.h>

int main () {

	int manyNumber, currentNumber, sum = 0; // 'somma' deve partire da 0!
	
	printf("how many numbers do you want insert: ");
	scanf("%d", &manyNumber);
	
	for (int i = 1; i <= manyNumber; i++) {
		
		printf("insert the number %d: ", i);
		scanf("%d", &currentNumber);
        
        sum = sum + currentNumber;
        //A sinistra dell'uguale: Salva il nuovo risultato dentro sum, sovrascrivendo il vecchio valore.
	}
	
		printf("the total is: %d\n", sum);
return 0;
}
