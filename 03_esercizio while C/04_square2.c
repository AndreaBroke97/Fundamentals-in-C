#include <stdio.h>

int main() { 

	int i = 1;
	int b, quadrato;
	
	printf("insert the number of rows: ");
	scanf ("%d", &b);
	
	while (i <= b) {
		quadrato = i * i;
		printf("%d\n", quadrato);
		i++;
	}
}
