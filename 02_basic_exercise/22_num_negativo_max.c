#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n22]\n");
    
    int numbers;
    int max;
    
    printf("Inserisci un numero: ");
    scanf("%d", &numbers); // Non dimenticare &
    
    // Il primo numero inserito è, per ora, il nostro massimo
    max = numbers;
    
    // Continua finché il numero è NON negativo (>= 0)
    while (numbers >= 0) {
        
        // Se il numero appena letto è maggiore del vecchio record...
        if (numbers > max) {
            // Aggiorna il record!
            max = numbers;
        }
        
        printf("Insert another number (negative for stop): ");
        scanf("%d", &numbers);
    }
    
    // Solo qui, fuori dal ciclo, stampiamo il vincitore
    printf("\nYou'r max number insert is : %d\n", max);
    
    return 0;
}
