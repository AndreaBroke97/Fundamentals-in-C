#include <stdio.h>

// function with return the sum of two numbers

/*int sum  (int a, int b) {
    return a + b;
}

int main(void) {

    int n, f;

        printf("insert the one number: ");
        scanf("%d", &n);

        printf("insert the second number: ");
        scanf("%d", &f);

        int result = sum(n, f);
        printf("the sum is %d\n", result);

    return 0;
}*/

//  ------------------------------------

// function with return the product of two numbers
/*int product (int a, int b) {
    return a * b;
}

int main(void) {

    int n1, n2;

        printf("insert the one number: ");
        scanf("%d", &n1);

        printf("insert the second number: ");
        scanf("%d", &n2);

        int result = product(n1, n2);
        printf("the product is %d\n", result);

    return 0;
}*/

// ------------------------------------

// function with return the division of two numbers
/*int division (int a, int b) {
    return a / b;
}

int main(void) {

    int n1, n2;

        printf("insert the one number: ");
        scanf("%d", &n1);

        printf("insert the second number: ");
        scanf("%d", &n2);

        int result = division(n1, n2);
        printf("the division is %d\n", result);

    return 0;
}*/

// ------------------------------------

// function with return the difference of two numbers
/*int difference (int a, int b) {
    return a - b;
}

int main(void) {

    int n1, n2;

        printf("insert the one number: ");
        scanf("%d", &n1);

        printf("insert the second number: ");
        scanf("%d", &n2);

        int result = difference(n1, n2);
        printf("the difference is %d\n", result);

    return 0;
}*/

/*int sum (int a, int b) {
    return a + b;
}

int difference (int a, int b) {
    return a - b;
}

int product (int a, int b) {
    return a * b;
}

int division (int a, int b) {
    return a / b;
}


int main(void) {

    int n1, n2, choice;

        printf("Choose an operation:\n");
        printf("1. Sum\n");
        printf("2. Difference\n");
        printf("3. Product\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        printf("insert the one number: ");
        scanf("%d", &n1);

        printf("insert the second number: ");
        scanf("%d", &n2);

        int result;
        switch(choice) {
            case 1:
                result = sum(n1, n2);
                printf("the sum is %d\n", result);
                break;
            case 2:
                result = difference(n1, n2);
                printf("the difference is %d\n", result);
                break;
            case 3:
                result = product(n1, n2);
                printf("the product is %d\n", result);
                break;
            case 4:
                result = division(n1, n2);
                printf("the division is %d\n", result);
                break;
            default:
                printf("Invalid choice\n");
        }

    return 0;
}*/

/*int sum (int a, int b) {
    return a + b;
}

int difference (int a, int b) {
    return a - b;
}

int product (int a, int b) {
    return a * b;
}

int division (int a, int b) {
    return a / b;
}

int main(void) {

    int n1, n2, choice;

    printf("Choose an operation:\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("insert the one number: ");
    scanf("%d", &n1);

    printf("insert the second number: ");
    scanf("%d", &n2);

    int result;
    switch (choice)
    {
        case 1:
        result = sum(n1, n2);
        printf("the sum is: %d\n", result);
        break;

        case 2:
        result = difference(n1, n2);
        printf("the difference is: %d\n", result);
        break;

        case 3:
        result = product(n1, n2);
        printf("the product is: %d\n", result);
        break;

        case 4:
        result = division(n1, n2);
        printf("the division is: %d\n", result);
        break;

        default:
        printf("Invalid choice\n");

    }

    return 0;
}*/

/*int sum(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

int main(void) {

    int n1, n2, choice;

    do {

        printf("\n--- MENU ---\n");
        printf("choose one (1-4):\n");
        printf("1. Sum\n2. Difference\n3. Product\n4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // controlliamo che la scelta sia valida
        if (choice == 0) {
            printf("exit!\n");
        } else if (choice >= 1 && choice <= 4) {

            printf("insert the first number: ");
            scanf("%d", &n1);
            printf("insert the second number: ");
            scanf("%d", &n2);

            switch (choice) {

            case 1:
                printf("Result of sum is %d\n", sum(n1, n2));
                break;

            case 2:
                printf("Result of difference is %d\n", difference(n1, n2));
                break;

            case 3:
                printf("Result of product is %d\n", product(n1, n2));
                break;

            case 4:
                if (n2 == 0)
                {
                    printf("Error: cannot divide by zero\n");
                }
                else
                {
                    // Stampiamo un float con 2 decimali (%.2f)
                    // Facciamo il cast (float) per passare i dati correttamente
                    // alla funzione division che accetta float come parametri
                    printf("Result of division is %.2f\n", division((float)n1, (float)n2));
                }
                break;
            }

            } else {
                // Messaggio per scelta non valida
                printf("invalid choice. Please try again.\n");
            }

        } while (choice != 0); // Aggiungiamo un'opzione per uscire dal menu (ad esempio, 0)

    return 0;
}*/

// Funzioni che ci ritornano la somma, differenza, prodotto e divisione di interi
//a e b, e nella divisione dei decimali a, e ,b
int sum(int a, int b){
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}
//int main funzione per avviare il codice con (void) che non ritorna nulla
int main(void) {

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