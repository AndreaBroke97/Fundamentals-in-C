#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n19]\n");
    
    int n, i, square;
    
    printf("inserisci il numero: ");
    scanf("%d", &n);
    
    i = 1; // 1. La partenza

	while (i <= n) // 2. La condizione (finché i è piccolo...)
{
    // 3. Calcolo
    square = i * i;
    
    // 4. Stampa
    printf("Il quadrato di %d è %d\n", i, square);
    
    // 5. Il passo (fondamentale, altrimenti il ciclo non finisce mai!)
    i++;
}

return 0;
}
