#include "00_header.h"   // include la tua libreria (virgolette = file locale)
#include <stdio.h>


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
