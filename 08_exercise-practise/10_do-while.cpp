#include <stdio.h>
#include <string.h>

/*int main() {
    int numero ;

    do {
        printf("Inserisci un numero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0); 
				numero--;	
    printf("Ottimo! Hai inserito: %d\n", numero);

    return 0;
}*/



/*
Obiettivo: Creare un programma che chieda all'utente di inserire un numero intero positivo (> 0). 
L'utente può sbagliare finché non inserisce un valore corretto. Una volta ottenuto il numero, 
il programma deve uscire dal ciclo e stampare "Valore corretto!".
*/
/*int main(void) {
        
    int n;

    do {
        printf("insert a number: ");
        scanf("%d", &n);
    } while (n <= 0);
                n++;
    printf("Valore corretto!");

    return 0;
}*/


/*
Obiettivo: Chiedi all'utente di inserire una frase (stringa). 
Conta quante volte appare una specifica lettera (es. 'a') nella frase inserita 
dal principio alla fine, ma non contare la prima occorrenza che viene stampata "trovato".
*/
int main(void) {
    char word[100]; //array per leggere la frase inserita dall'utente
    char letter; //lettera da cercare
    int contator = 0; //conta le occorrenze escludendo la prima
    int first_time = 0; //ricorda se abbiamo già trovato la prima occorrenza
    // = 0 è false = 1 e true
    int i = 0; //posizione nell'array

    printf("insert a word: ");
    fgets(word, 100, stdin); 
    //fgets, legge una frase intera dalla tastiera e la salva in un array
    //stdin = standard input (dove legge la tastiera)
    printf("insert the letter to search for: ");
    scanf(" %c", &letter);
    /*Lo spazio serve perché fgets lascia un carattere \n (invio) nella tastiera, 
    e senza lo spazio scanf lo leggerebbe come lettera*/

    do {
        if (word[i] == letter) { // se hai trovato la lettera
            if (first_time == 0) { // e se e la prima volta
                printf("Found!\n"); //stampa trovato
                first_time = 1;
            } else { // altrimenti incrementa contator
                contator++;
            }
        }
       
            i++;
    } while (i < strlen(word));

        printf("letter found! %d times", contator);

    return 0;
}