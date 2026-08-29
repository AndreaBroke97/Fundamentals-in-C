#include <stdio.h>

int main(void)
{
    // Dichiarazioni delle variabili
    int num1;
    int num2;

    // Inserimento del primo numero
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    // Inserimento del secondo numero
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // Stampa a video risultati

    // SOMMA
    printf("Somma = %d \n", num1 + num2);

    // DIFFERENZA
    printf("Differenza = %d \n", num1 - num2);

    // PRODOTTO
    printf("Prodotto = %d \n", num1 * num2);

    // Condizione che valuta se il secondo numero è diverso da 0
    if (num2 != 0)
    {
        // DIVISIONE
        printf("Divisione = %d \n", num1 / num2);
    }
    else
    {
        printf("Non puoi dividere un numero per 0 !");
    }

    return 0;
}
