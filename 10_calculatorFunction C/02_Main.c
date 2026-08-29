#include <stdio.h>
#include "00_header.h"

int main(void) {
//per avvio ./calculator
//per cambiare nome: gcc 02_Main.c 01_calculatorFunction.c -o calcolatrice
// per rimuovere il nome calculator vai su cmd: cd "C:\Users\Andre\Desktop\steve jobs academy\esercizi backend\10_calculatorFunction C"
    int n1, n2, choice;

    do {

        printf("\n--- MENU ---\n");
        printf("insert 0 for exit:\n");
        printf("choose one (1-4):\n");
        printf("1. Sum\n2. Difference\n3. Product\n4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // eseguiamo un controllo se choice e uguale a 0 ESCI altrimenti se rientra tra 1 e 4 inizia il programma
        if (choice == 0) {
            printf("exit\n");
        } else if (choice >= 1 && choice <= 4) {

            printf("insert the one number: ");
            scanf("%d", &n1);
            printf("insert the second number: ");
            scanf("%d", &n2);

            switch (choice) {

                // invece di usare return = sum(n1, n2); per poter usare il float in division e int in tutti gli altri
                // all'interno del printf dopo i doppi apici ho messo direttamente sum(n1, n2) etc.
                // così ritorna il risultato di n1 e n2 potendo usare gli int su sum, diff e product e float su division
                case 1:
                printf("the result of the sum is: %d\n", sum(n1, n2)); 
                break;

                case 2:
                printf("the result of the difference is: %d\n", difference(n1, n2));
                break;

                case 3:
                printf("the result of the product is: %d\n", product(n1, n2));
                break;

                case 4: 
                // controlla se choice e uguale a 0 da errore altrimenti il risultato e %.2f(che da un numero in decimale),
                // e poi rispetto agli altri ho aggiunto all'interno di division(n1, n2) i due (float) tra parentesi su n1 ed n2
                if (choice == 0) {
                    printf("Error: you cannot divide by 0");
                } else {
                    printf("the result of the division is: %.2f\n", division((float) n1, (float) n2));
                }
                break;
            }

            } else { // se sbagli scelta come inserendo 5 o 6 ti dirà che stai sbagliando e di riprovare
                printf("invalid choice, please try again!\n");
            }

        } while (choice != 0); //finchè choice e diverso da 0, il programma finisce

    return 0;
}