#include <stdio.h>
// Funzione che calcola la media tra due numeri
	float avg(float a, float b) {
	
	
	return (a + b) / 2;
}

int main (void) {
	
	float x, y, z;
	
	printf("inserisci i primi 3 numeri:\n");
	scanf("%f %f %f", &x, &y, &z);
	
	//calcolo la media tra x è y
	printf("the average of %f and %f is %f\n", x, y, avg(x, y));
	
	printf("the average of %f and %f is %f\n", y, z, avg(y,z));
	
	printf("the average of %f and %f is %f\n", x, z, avg(x, z));


	
	return 0;
}


