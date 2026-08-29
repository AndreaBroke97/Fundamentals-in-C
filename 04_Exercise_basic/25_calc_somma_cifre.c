#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n25\n");
    
    //Calcolare la somma delle cifre di un numero.  
    int n;
    int sum = 0;
    
    printf("inserisci un numero: ");
    scanf("%d", &n);
    
    while (n > 0) {
    sum = sum + (n % 10);
    n = n / 10;
}
	printf("hanno come somma %d\n", sum);
	
	
	return 0;
}
