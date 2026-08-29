#include <stdio.h>
#include <string.h>

#define TIPOLOGY_OF_ROOM[10]
#define STATE_OF_ROOM[10]
#define NAME_VARIABLE[30]

struct rooms {
    int numberOfRoom;
    int maxCapience;
    float priceForNight;
    int numOfNightBooked;
    char nameVariable[30];
};

struct rooms arrayRooms[100];
int count = 0;

void addRoom() {
    printf("Insert the number of the room: ");
    scanf("%d", &arrayRooms[count].numberOfRoom);
    
    printf("Insert the tipology of the room: ");
    scanf("%s", arrayRooms[count].tipology_of_room);

    printf("insert the max capience of the room: ");
    scanf("%d", &arrayRooms[count].maxCapience);

    printf("insert the price for night: ");
    scanf("%f", &arrayRooms[count].priceForNight);

    printf("insert the number of night booked: ");
    scanf("%d", &arrayRooms[count].numOfNightBooked);

    printf("insert the state of the room: ");
    scanf("%s", arrayRooms[count].stateOfRoom);

    printf("insert the name of the customer: ");    
    scanf("%s", arrayRooms[count].nameVariable);
        numRooms++;
};

void showAllRooms() {
    for(int i = 0; i < numRooms; i++) {
        printf("Room number: %d\n", arrayRooms[i].numberOfRoom);

        printf("");
    }
}



void showmenu() {
    int choice;

    do {
        printf("\n-------MENU-------\n");
        printf("1: Number of rooms\n");
        printf("2: Show all rooms\n");
        printf("3: Search rooms\n");
        printf("4: Price for night\n");
        printf("5: Type of rooms\n");
        printf("6: State of the rooms\n");
        printf("7: Add room\n");
        printf("8:\n");
        printf("9:\n");
        printf("10:\n");
        printf("11:\n");
        printf("12: Exit\n");

        printf("insert your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
            printf("Number of rooms: %d\n", numRooms); 
            break;
            case 2: 
            printf("show all rooms: %d\n", numRooms); 
            break;
            case 3: 
            printf("s\n"); 
            break;
            case 4: 
            printf("todo\n"); 
            break;
            case 5: 
            printf("todo\n"); 
            break;
            case 6: 
            printf("todo\n"); 
            break;
            case 7: 
            printf("todo\n"); 
            break;
            case 8: 
            printf("todo\n"); 
            break;
            case 9: 
            printf("todo\n");
            break;
            case 10: 
            printf("todo\n"); 
            break;
            case 11: 
            printf("todo\n"); 
            break;
            case 12: 
            printf("Exit\n"); 
            break;
            default: 
            printf("Invalid Number\n"); 
            break;
        }

    } while(choice != 12);
}

int main(void) {
    showmenu();
    return 0;
}

//1: inserimento di una nuova camera

//////////////////////////////////////////

//2: Visualizzazione completa di tutte le camere presenti nell'archivio:
//2: L’archivio è un Array di struct di capienza massima di [100 ]

//////////////////////////////////////////

//3: Cercare una camera mediante il numero identificativo
//3: ✓ Se il numero della camera è presente nell'archivio (Array) 
//3: visualizza tutti i dati della camera presenti .
//3: Altrimenti mostrare tipo un messaggio "Camera inesistente”

//////////////////////////////////////////

//4: Aggiornamento del prezzo per notte

//////////////////////////////////////////

//5: Aggiornamento del numero di notti prenotate

//////////////////////////////////////////

//6: Modifica dello stato della camera

//////////////////////////////////////////

/*7: Registrazione di una prenotazione:
Quando un cliente prenota una camera, il programma deve aggiornare 
tre campi della struct: il nome del cliente, il numero di notti prenotate 
e lo stato della camera che passa da libera a occupata.*/

//////////////////////////////////////////

/*8: Registrazione del check-out:
Quando un cliente lascia la camera, il programma deve azzerare il nome del cliente, 
azzerare il numero di notti prenotate e riportare lo stato della camera a libera.*/

//////////////////////////////////////////

/*9: Calcolare l'importo totale della prenotazione:
per ogni camera il programma moltiplica il prezzo per notte per 
il numero di notti prenotate. Formula: prezzo per notte × numero di notti prenotate.*/

//////////////////////////////////////////

/*10: Elaborazioni:
➢ Calcolo dell'incasso teorico complessivo delle camere occupate:
Il programma scorre tutto l'array e per ogni camera il cui stato è occupata 
calcola l'importo (prezzo per notte × numero di notti prenotate) e lo somma 
a un totale complessivo. Alla fine mostra il totale.


➢ Conteggio delle camere per tipologia:
Il programma scorre tutto l'array e per ogni camera controlla la sua tipologia. 
Utilizza 4 contatori separati 
(uno per singola, uno per doppia, uno per tripla, uno per suite) 
e incrementa quello giusto. Alla fine mostra il risultato di ognuno.


➢Individuazione della camera con importo totale più elevato:
Il programma scorre tutto l'array tenendo una variabile max 
inizialmente a 0. Per ogni camera calcola l'importo 
(prezzo per notte × numero di notti prenotate) e se è 
maggiore di max lo sostituisce. Alla fine mostra la camera con l'importo più alto.


➢Calcolo del prezzo medio per notte delle camere registrate:
Il programma somma il prezzo per notte di tutte le camere registrate 
e divide il risultato per il numero totale di camere 
(il contatore). Formula: (somma prezzi) / contatore.
*/

//////////////////////////////////////////

//11: Uscita

//////////////////////////////////////////