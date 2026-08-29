#include <stdio.h>
// PROTOTIPI
void print_menu(void); //stampa un menù e basta, non ha valori di ingresso e di uscita
int read_choice(void); //non riceve parametri ma restituisce un intero
float sum(float a, float b); //riceve due interi restituendo un intero e calcolando la somma dei due valori
float difference(float a, float b);
float product(float a, float b);
float division(float a, float b);
void execute_choice(int choice); //riceve un intero nei parametri ma non restituisce nulla essendo void

////////////////////////////////////////////////////////////////

int main(void) {

    print_menu(); //funzione stampa menù
    int choice = read_choice(); // funzione leggi la scelta
    execute_choice(choice); //funzione esegui la scelta
    return 0;
}

////////////////////////////////////////////////////////////////

void print_menu(void) { //Funzione con il Menù
    printf("-----MENU-----\n");
    printf("1) Sum\n");
    printf("2) difference\n");
    printf("3) product\n");
    printf("4) division\n");
    printf("5) Exit\n");
}

////////////////////////////////////////////////////////////////

int read_choice(void) { //Funzione che fa scegliere all'utente e poi ritorna Choice

    int choice;
    printf("Choose:");
    scanf("%d", &choice);
    return choice;
}

////////////////////////////////////////////////////////////////

float sum(float a, float b) {  // Funzione con Somma
    return a + b;
}
float difference(float c, float d) {
    return c - d;
}
float product(float e, float f) {
    return e * f;
}
float division(float g, float h) {
    return g / h;
}

////////////////////////////////////////////////////////////////

void execute_choice(int choice) {
    if (choice == 5) {
    printf("Program finished.\n");
    return;
    }

    float x, y;
    printf("Insert two numbers: ");
    scanf("%f %f", &x, &y);

    float result;

    switch (choice) {
        case 1: result = sum (x,y);
        break;
        case 2: result = difference(x, y); 
        break;
        case 3: result = product(x, y);    
        break;
        case 4: result = division(x, y);   
        break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    printf("The result is: %.2f\n", result);
}