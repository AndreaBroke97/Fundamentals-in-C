#include <stdio.h>

void print_menu() {
    printf("\n---- MENU ----");
    printf("\n1) Somma");
    printf("\n2) Differenza");
    printf("\n3) Moltiplicazione");
    printf("\n4) Divisione");
    printf("\n0) Esci\n");
}

int readChoice(char prompt[]) {
    int choice;
    printf("\n%s: ", prompt);
    scanf("%d", &choice);
    return choice;
}

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    return (float)a / b;
}

void validate_choice(int value) {

    if (value == 0) {
        printf("\nSabbinirica!!!\n");
        return;
    }

    int value1 = readChoice("Inserisci il valore 1");
    int value2 = readChoice("Inserisci il valore 2");

    switch (value) {

        case 1: {
            printf("\nHai scelto la somma...");
            int sumValue = sum(value1, value2);
            printf("\nLa somma e %d\n", sumValue);
            break;
        }

        case 2: {
            printf("\nHai scelto la differenza...");
            int diffValue = diff(value1, value2);
            printf("\nLa differenza e %d\n", diffValue);
            break;
        }

        case 3: {
            printf("\nHai scelto il prodotto...");
            int multValue = mult(value1, value2);
            printf("\nIl prodotto e %d\n", multValue);
            break;
        }

        case 4: {
            printf("\nHai scelto la divisione...");
            if (value2 == 0) {
                printf("\nErrore: divisione per zero!\n");
            } else {
                float divValue = divi(value1, value2);
                printf("\nIl risultato è %.2f\n", divValue);
            }
            break;
        }

        default:
            printf("\nScelta non consentita...\n");
    }
}

void loopChoice() {
    int choice;

    do {
        print_menu();
        choice = readChoice("Inserisci una scelta");
        validate_choice(choice);
    } while (choice != 0);
}

int main() {
    loopChoice();
    return 0;
}
