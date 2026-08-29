#include <stdio.h>

void stampaMenu()
{
    printf("MENU\n");
    printf("\n1) divisione");
    printf("\n2) moltiplicazione");
    printf("\n3) somma");
    printf("\n4) sottrazione");
    printf("\ninserisci l'operazione che vuoi eseguire: ");

}

// Simulare un menu con più opzioni usando un ciclo.
int main()
{
    int choice;
    stampaMenu ();
    scanf(" %d", &choice);

    switch (choice) {
    case 1:
        printf("Hai scelto la divisione\n");
        break;
    case 2:
        printf("Hai scelto la moltiplicazione\n");
        break;
    case 3:
        printf("Hai scelto la somma\n");
        break;
    case 4:
        printf("Hai scelto la sottrazione\n");
        break;
    default:
        printf("Scelta non valida\n");
}

}
