//6. Leggere un voto (0–30) e stampare “insufficiente”, “sufficiente”, “buono” o “ottimo”.
#include <stdio.h>

#include <stdio.h>

int main() {

    int voto;

    printf("Inserisci un voto (0-30): ");
    scanf("%d", &voto);

    if (voto >= 0 && voto <= 10) {
        printf("%d e insufficiente\n", voto);
    }
    else if (voto <= 17) {
        printf("%d e sufficiente\n", voto);
    }
    else if (voto <= 25) {
        printf("%d e buono\n", voto);
    }
    else if (voto <= 30) {
        printf("%d e ottimo\n", voto);
    }
    else {
        printf("Voto non valido\n");
    }

    return 0;
}
