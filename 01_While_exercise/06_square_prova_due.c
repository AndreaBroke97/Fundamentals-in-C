#include <stdio.h>

int main () {
	
	int i = 1;
	int n, square;
	
	printf("stampa numero di righe:");
	scanf("%d", &n);

	while (i <= n){
		square = i * i;
		printf("%d", square);
		i++;
	}
	return 0;
}
