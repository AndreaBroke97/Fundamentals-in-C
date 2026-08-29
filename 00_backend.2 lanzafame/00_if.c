#include <stdio.h>
// verifichiamo se n è maggiore di a
/*int main() {

    int n, a;

    printf("inserisci un numero: ");
    scanf("%d", &n);

    printf("inserisci il 2 numero: ");
    scanf("%d", &a);

    if (n > a) {
        printf("%d e maggiore");
    } else {
        printf("%d non e maggiore");
    }
    return 0;
}*/



// 1 Scrivere un programma che legga un numero intero e stampi se è positivo, negativo o zero.
/*int main() {
    int n;

    printf("inserisci un numero intero: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("%d e positivo\n", n);
    } else if (n < 0) {
        printf("%d e negativo\n", n);
    } else {
        printf("il numero e zero\n");
    }

    return 0;
}*/



// 2 Leggere due numeri interi e stampare il maggiore tra i due.

/*int main() {

    int n, i;

    printf("inserisci 1 numero: ");
    scanf("%d", &n);

    printf("inserisci 2 numero: ");
    scanf("%d", &i);

    if (n > i) {
        printf("%d e maggiore\n", n);
    } else if (i > n) {
        printf("%d e maggiore\n", i);
    } else {
        printf("uguali");
    }
    return 0;
}*/



// 3. Leggere tre numeri interi e determinare il maggiore.

int main() {

    int a, b, c;
    int max;
    printf("inserisci tre numeri:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("il numero maggiore e: %d\n", max);
}



// 4. Leggere un numero intero e verificare se è pari o dispari.
/*
int main () {

    int n;

    printf("inserisci un numero intero: ");ù
    scanf("%d", &n);

    
}
*/