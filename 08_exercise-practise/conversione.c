#include <stdio.h>

// conversione da decimale a binario
// riconvertiamo in decimale
// risultato del binario ad esadecimale
// da esadecimale a decimale

int division(int a, int b) {
    return a / b;   
}   

int main() {
    int decimale;
    int binario = 0;
    int esadecimale = 0;

    printf("Inserisci un numero decimale: ");
    scanf("%d", &decimale);


    // conversione da decimale a binario
    int i = 1;
    while (decimale > 0) {
        binario += (decimale % 2) * i;
        decimale /= 2;
        i *= 10;
    }
    printf("Binario: %d\n", binario);

    // riconvertiamo in decimale
    int decimale_riconvertito = 0;
    i = 1;
    while (binario > 0) {
        decimale_riconvertito += (binario % 10) * i;
        binario /= 10;
        i *= 2;
    }
    printf("Decimale riconvertito: %d\n", decimale_riconvertito);

    // risultato del binario ad esadecimale
    esadecimale = division(decimale_riconvertito, 16);
    printf("Esadecimale: %X\n", esadecimale);

    // da esadecimale a decimale
    int decimale_da_esadecimale = esadecimale * 16;
    printf("Decimale da esadecimale: %d\n", decimale_da_esadecimale);

    return 0;
}