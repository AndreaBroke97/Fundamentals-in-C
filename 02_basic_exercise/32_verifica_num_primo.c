#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n32]\n");

    int n;
    int primo = 1; // supponiamo che sia primo

    printf("Inserisci un numero:\n");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("Il numero è primo\n");
    } else {
        printf("Il numero non è primo\n");
    }

    return 0;
}

