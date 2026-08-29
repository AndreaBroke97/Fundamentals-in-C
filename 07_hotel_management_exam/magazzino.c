/* Dichiarazione delle costanti e delle librerie
La prima parte del programma contiene le librerie necessarie e le costanti utili per definire la capacità massima
dell’archivio e la lunghezza massima del nome.*/
#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define NAME_LENGTH 30

/*Creazione del menu (abbiamo usato una funzione invece di if o switch)
Il programma deve mostrare un menu numerico che permetta di scegliere l’operazione da eseguire. Il menu viene ripetuto
fino alla scelta di uscita./**/
int showMenu() {
    int choice;
    do {
        printf("\n--- PRODUCT MANAGEMENT ---\n");
        printf("1. Insert product\n");
        printf("2. Show all products\n");
        printf("3. Search product by code\n");
        printf("4. Update price\n");
        printf("5. Update quantity\n");
        printf("6. Sell product\n");
        printf("7. Add stock\n");
        printf("8. Calculate warehouse value\n");
        printf("9. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
   
    } while (choice != 9);
     return choice;
}

/*Ricerca di un prodotto tramite codice
La ricerca richiede di scorrere l’array dei codici fino a trovare una corrispondenza. 
Se il codice esiste, si restituisce il relativo
indice; altrimenti si restituisce -1 .*/
int findProductIndex(int codes[], int count, int searchedCode) {
    int i;
    for (i = 0; i < count; i++) {
        if (codes[i] == searchedCode) {
            return i;
        }
    }
    return -1;
}
/*Inserimento di un prodotto
L’inserimento consiste nel leggere da tastiera i dati del prodotto e 
salvarli nella posizione indicata da count.*/
void insertProduct(int codes[], char names[][NAME_LENGTH], float prices[], int quantities[], int position) {
    printf("Code: ");
    scanf("%d", &codes[position]);
    printf("Name: ");
    scanf("%s", names[position]);
    printf("Price: ");
    scanf("%f", &prices[position]);
    printf("Quantity: ");
    scanf("%d", &quantities[position]);
}

/*Visualizzazione di tutti i prodotti
Per mostrare l’intero archivio si percorrono gli array fino a count - 1 . 
Ogni iterazione stampa le informazioni di un prodotto.*/
void showProducts(int codes[], char names[][NAME_LENGTH], float prices[], int quantities[], int count) {
    int i;
    if (count == 0) {
        printf("No products available.\n");
    } else {
        printf("\n%-10s %-20s %-10s %-10s\n", "CODE", "NAME", "PRICE", "QUANTITY");
        for (i = 0; i < count; i++) {
            printf("%-10d %-20s %-10.2f %-10d\n",
                    codes[i], names[i], prices[i], quantities[i]);
        }
    }
}

int main() {
/*Dichiarazione degli array paralleli
I dati dei prodotti vengono memorizzati in quattro array paralleli: uno per i codici, uno per i nomi, uno per i prezzi e uno
per le quantità. La variabile count tiene traccia del numero reale di prodotti inseriti.*/
    int codes[MAX_PRODUCTS];
    char names[MAX_PRODUCTS][NAME_LENGTH];
    float prices[MAX_PRODUCTS];
    int quantities[MAX_PRODUCTS];
    int count = 0;
    int choice;
/*Significato dell’indice
Ogni posizione degli array rappresenta un prodotto completo. Se il prodotto si trova alla posizione i , 
allora codes[i], names[i], prices[i], quantities[i]; appartengono tutti allo stesso elemento logico.*/

/*Uso del ciclo principale
Il menu viene gestito in un ciclo do...while , così il 
programma continua a funzionare finché non viene scelta l’uscita.*/
    do {
        choice = showMenu();
/*Controllo della capacità massima
Prima di inserire un nuovo elemento bisogna verificare che l’archivio non sia pieno.*/
        if (choice == 1) {
            if (count < MAX_PRODUCTS) {
                insertProduct(codes, names, prices, quantities, count);
                count++;
            } else {
                printf("Archive full.\n");
            } 

        } else if (choice == 2) {
            showProducts(codes, names, prices, quantities, count);
        /*Uso della funzione di ricerca
        La funzione di ricerca consente di evitare la riscrittura dello stesso ciclo in più parti del programma.*/
        } else if (choice == 3) {
            int searchedCode;
            int index;
            printf("Enter code: ");
            scanf("%d", &searchedCode);
            index = findProductIndex(codes, count, searchedCode);
            /*Stampa del singolo prodotto trovato
            Una volta ottenuto l’indice, è possibile 
            accedere a tutte le informazioni del prodotto tramite lo stesso valore.*/
            if (index != -1) {
                printf("Code: %d\n", codes[index]);
                printf("Name: %s\n", names[index]);
                printf("Price: %.2f\n", prices[index]);
                printf("Quantity: %d\n", quantities[index]);
            } else {
                printf("Product not found.\n");
            }
            /*Aggiornamento del prezzo
            Per modificare il prezzo di un prodotto 
        si ricerca prima il codice, poi si assegna 
        il nuovo valore all’array dei prezzi nella posizione trovata.*/
        } else if (choice == 4) {
            int searchedCode;
            int index;
            float newPrice;
            printf("Enter code: ");
            scanf("%d", &searchedCode);
            index = findProductIndex(codes, count, searchedCode);
            if (index != -1) {
                printf("New price: ");
                scanf("%f", &newPrice);
                prices[index] = newPrice;
                printf("Price updated.\n");
            } else {
                printf("Product not found.\n");
            }
        /*Aggiornamento della quantità
        La modifica della quantità segue la stessa 
        logica dell’aggiornamento del prezzo.*/
        } else if (choice == 5) {
            int searchedCode;
            int index;
            int newQuantity;
            printf("Enter code: ");
            scanf("%d", &searchedCode);
            index = findProductIndex(codes, count, searchedCode);
            if (index != -1) {
                printf("New quantity: ");
                scanf("%d", &newQuantity);
                quantities[index] = newQuantity;
                printf("Quantity updated.\n");
            } else {
                printf("Product not found.\n");
            }

        } else if (choice == 6) {
        /*Registrazione di una vendita
        La vendita diminuisce la quantità disponibile. 
        Prima della sottrazione occorre verificare che la 
        quantità richiesta sia positiva
        e non superiore alla disponibilità esistente.*/
            int searchedCode;
            int index;
            int soldQuantity;

            printf("Enter code: ");
            scanf("%d", &searchedCode);

            index = findProductIndex(codes, count, searchedCode);

            if (index != -1) {
                printf("Quantity to sell: ");
                scanf("%d", &soldQuantity);

                if (soldQuantity > 0 && soldQuantity <= quantities[index]) {
                    quantities[index] = quantities[index] - soldQuantity;
                    printf("Sale completed.\n");
                } else {
                    printf("Insufficient quantity.\n");
                }
            } else {
                printf("Product not found.\n");
            }

        } else if (choice == 7) {
            /*Carico di magazzino Il carico aumenta il numero di 
            unità disponibili. Anche in questo caso si opera sulla 
            posizione individuata tramite il codice.*/
            int searchedCode;
            int index;
            int addedQuantity;

            printf("Enter code: ");
            scanf("%d", &searchedCode);

            index = findProductIndex(codes, count, searchedCode);

            if (index != -1) {
                printf("Quantity to add: ");
                scanf("%d", &addedQuantity);
            
                if (addedQuantity > 0) {
                    quantities[index] = quantities[index] + addedQuantity;
                    printf("Stock updated.\n");
                } else {
                    printf("Invalid quantity.\n");
                }
            } else {
                printf("Product not found.\n");
            }

        } else if (choice == 8) {
            /*Calcolo del valore totale del magazzino
            Il valore totale del magazzino si ottiene sommando, per ogni prodotto, il risultato del prezzo moltiplicato per la quantità
            disponibile.*/
            int i;

            float totalValue = 0;
            for (i = 0; i < count; i++) {
                totalValue = totalValue + prices[i] * quantities[i];
            }
            printf("Total warehouse value: %.2f\n", totalValue);
        }

    } while (choice != 9);

    return 0;
}