#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n38]\n");
    //Leggere una sequenza di numeri e stampare il massimo e il minimo.
    
    int numbers;
	int max, min;
	int primo_giro = 1; // Una variabile "bandierina" per capire se è il primo numero

	do {
    printf("Inserisci un numero (0 per finire): ");
    scanf("%d", &numbers);

    if (numbers != 0) {
        if (primo_giro) {
            // Se è il primo numero, max e min sono uguali a numbers
            max = numbers;
            min = numbers;
            primo_giro = 0; // Abbassiamo la bandierina
        } else {
            // Qui dobbiamo fare i confronti per i giri successivi
            if (numbers > max) {
    max = numbers;  // Aggiorna il record del più grande
	}

	if (numbers < min) {
    min = numbers;  // Aggiorna il record del più piccolo
	}
        }
    }
    
	} while (numbers != 0);	
	
    // Controllo finale: abbiamo processato almeno un numero?
    if (primo_giro == 1) {
        printf("\nNon hai inserito nessun numero valido prima dello zero.\n");
    } else {
        printf("\n--- RISULTATI ---\n");
        printf("Il numero massimo è: %d\n", max);
        printf("Il numero minimo è: %d\n", min);
    }
    
    return 0;
}
	

