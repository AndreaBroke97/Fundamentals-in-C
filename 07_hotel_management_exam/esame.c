#include <stdio.h>
#include <string.h>

#define MAX 100
#define TIPOLOGY_LENGTH 10
#define STATE_LENGTH 10
#define NAME_LENGTH 30

struct rooms {
    int numberOfRoom;
    char tipologyOfRoom[TIPOLOGY_LENGTH];
    int maxCapience;
    float priceForNight;
    int numOfNightBooked;
    char stateOfRoom[STATE_LENGTH];
    char nameVariable[NAME_LENGTH];
};

struct rooms arrayRooms[MAX];
int count = 0;

// Funzione di appoggio: cerca una camera dal numero e restituisce
// la sua posizione nell'array, oppure -1 se non esiste.
int findRoomIndex(int number) {
    for (int i = 0; i < count; i++) {
        if (arrayRooms[i].numberOfRoom == number) {
            return i;
        }
    }
    return -1;
}

// 1: inserimento di una nuova camera
void addRoom() {
    if (count == MAX) {
        printf("Archivio pieno: impossibile aggiungere altre camere.\n");
        return;
    }

    printf("Insert the number of the room: ");
    scanf("%d", &arrayRooms[count].numberOfRoom);

    printf("Insert the tipology of the room (singola/doppia/tripla/suite): ");
    scanf("%s", arrayRooms[count].tipologyOfRoom);

    printf("insert the max capience of the room: ");
    scanf("%d", &arrayRooms[count].maxCapience);

    printf("insert the price for night: ");
    scanf("%f", &arrayRooms[count].priceForNight);

    printf("insert the number of night booked: ");
    scanf("%d", &arrayRooms[count].numOfNightBooked);

    printf("insert the state of the room (libera/occupata): ");
    scanf("%s", arrayRooms[count].stateOfRoom);

    printf("insert the name of the customer: ");
    scanf("%s", arrayRooms[count].nameVariable);

    count++;
}

// 2: visualizzazione completa di tutte le camere
void showAllRooms() {
    if (count == 0) {
        printf("Nessuna camera presente in archivio.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Room number: %d\n", arrayRooms[i].numberOfRoom);
        printf("Tipology: %s\n", arrayRooms[i].tipologyOfRoom);
        printf("Max capience: %d\n", arrayRooms[i].maxCapience);
        printf("Price for night: %.2f\n", arrayRooms[i].priceForNight);
        printf("Nights booked: %d\n", arrayRooms[i].numOfNightBooked);
        printf("State: %s\n", arrayRooms[i].stateOfRoom);
        printf("Customer name: %s\n", arrayRooms[i].nameVariable);
        printf("--------------------\n");
    }
}

// 3: cercare una camera mediante il numero identificativo
void searchRoom() {
    int number;
    printf("Insert the number of the room to search: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    printf("Room number: %d\n", arrayRooms[index].numberOfRoom);
    printf("Tipology: %s\n", arrayRooms[index].tipologyOfRoom);
    printf("Max capience: %d\n", arrayRooms[index].maxCapience);
    printf("Price for night: %.2f\n", arrayRooms[index].priceForNight);
    printf("Nights booked: %d\n", arrayRooms[index].numOfNightBooked);
    printf("State: %s\n", arrayRooms[index].stateOfRoom);
    printf("Customer name: %s\n", arrayRooms[index].nameVariable);
}

// 4: aggiornamento del prezzo per notte
void updatePrice() {
    int number;
    printf("Insert the number of the room: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    printf("Insert the new price for night: ");
    scanf("%f", &arrayRooms[index].priceForNight);
    printf("Prezzo aggiornato.\n");
}

// 5: aggiornamento del numero di notti prenotate
void updateNights() {
    int number;
    printf("Insert the number of the room: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    printf("Insert the new number of nights booked: ");
    scanf("%d", &arrayRooms[index].numOfNightBooked);
    printf("Notti prenotate aggiornate.\n");
}

// 6: modifica dello stato della camera
void updateState() {
    int number;
    printf("Insert the number of the room: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    printf("Insert the new state (libera/occupata): ");
    scanf("%s", arrayRooms[index].stateOfRoom);
    printf("Stato aggiornato.\n");
}

// 7: registrazione di una prenotazione (check-in)
void checkIn() {
    int number;
    printf("Insert the number of the room to book: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    if (strcmp(arrayRooms[index].stateOfRoom, "occupata") == 0) {
        printf("La camera e' gia' occupata.\n");
        return;
    }

    printf("Insert the name of the customer: ");
    scanf("%s", arrayRooms[index].nameVariable);

    printf("Insert the number of nights booked: ");
    scanf("%d", &arrayRooms[index].numOfNightBooked);

    strcpy(arrayRooms[index].stateOfRoom, "occupata");
    printf("Prenotazione registrata.\n");
}

// 8: registrazione del check-out
void checkOut() {
    int number;
    printf("Insert the number of the room for check-out: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    strcpy(arrayRooms[index].nameVariable, "");
    arrayRooms[index].numOfNightBooked = 0;
    strcpy(arrayRooms[index].stateOfRoom, "libera");
    printf("Check-out registrato.\n");
}

// 9: calcolare l'importo totale della prenotazione (prezzo x notti)
void totalBookingAmount() {
    int number;
    printf("Insert the number of the room: ");
    scanf("%d", &number);

    int index = findRoomIndex(number);

    if (index == -1) {
        printf("Camera inesistente\n");
        return;
    }

    float total = arrayRooms[index].priceForNight * arrayRooms[index].numOfNightBooked;
    printf("Importo totale della prenotazione: %.2f\n", total);
}

// 10 - elaborazione 1: incasso teorico complessivo delle camere occupate
void totalRevenue() {
    float total = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(arrayRooms[i].stateOfRoom, "occupata") == 0) {
            total += arrayRooms[i].priceForNight * arrayRooms[i].numOfNightBooked;
        }
    }
    printf("Incasso teorico complessivo (camere occupate): %.2f\n", total);
}

// 10 - elaborazione 2: conteggio delle camere per tipologia
void countByType() {
    int single = 0, doubleR = 0, triple = 0, suite = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(arrayRooms[i].tipologyOfRoom, "singola") == 0) {
            single++;
        } else if (strcmp(arrayRooms[i].tipologyOfRoom, "doppia") == 0) {
            doubleR++;
        } else if (strcmp(arrayRooms[i].tipologyOfRoom, "tripla") == 0) {
            triple++;
        } else if (strcmp(arrayRooms[i].tipologyOfRoom, "suite") == 0) {
            suite++;
        }
    }

    printf("Singole: %d\n", single);
    printf("Doppie: %d\n", doubleR);
    printf("Triple: %d\n", triple);
    printf("Suite: %d\n", suite);
}

// 10 - elaborazione 3: camera con l'importo totale piu' elevato
void highestAmount() {
    float max = 0;
    int roomNumber = -1;

    for (int i = 0; i < count; i++) {
        float amount = arrayRooms[i].priceForNight * arrayRooms[i].numOfNightBooked;
        if (amount > max) {
            max = amount;
            roomNumber = arrayRooms[i].numberOfRoom;
        }
    }

    if (roomNumber == -1) {
        printf("Nessuna camera con un importo calcolabile.\n");
    } else {
        printf("La camera con l'importo piu' alto e' la %d con %.2f\n", roomNumber, max);
    }
}

// 10 - elaborazione 4: prezzo medio per notte delle camere registrate
void averagePrice() {
    if (count == 0) {
        printf("Nessuna camera registrata.\n");
        return;
    }

    float total = 0;
    for (int i = 0; i < count; i++) {
        total += arrayRooms[i].priceForNight;
    }

    printf("Prezzo medio per notte: %.2f\n", total / count);
}

// 10: sotto-menu delle elaborazioni
void elaborations() {
    int choice;

    do {
        printf("\n--- ELABORAZIONI ---\n");
        printf("1: Incasso teorico complessivo\n");
        printf("2: Conteggio camere per tipologia\n");
        printf("3: Camera con importo piu' alto\n");
        printf("4: Prezzo medio per notte\n");
        printf("0: Torna al menu principale\n");
        printf("Scelta: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: totalRevenue(); break;
            case 2: countByType(); break;
            case 3: highestAmount(); break;
            case 4: averagePrice(); break;
            case 0: break;
            default: printf("Scelta non valida.\n"); break;
        }
    } while (choice != 0);
}

void showmenu() {
    int choice;

    do {
        printf("\n-------MENU-------\n");
        printf("1: Add room\n");
        printf("2: Show all rooms\n");
        printf("3: Search room\n");
        printf("4: Update price for night\n");
        printf("5: Update booked nights\n");
        printf("6: Update room state\n");
        printf("7: Register booking (check-in)\n");
        printf("8: Register check-out\n");
        printf("9: Total booking amount\n");
        printf("10: Elaborations\n");
        printf("11: Exit\n");

        printf("insert your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRoom(); break;
            case 2: showAllRooms(); break;
            case 3: searchRoom(); break;
            case 4: updatePrice(); break;
            case 5: updateNights(); break;
            case 6: updateState(); break;
            case 7: checkIn(); break;
            case 8: checkOut(); break;
            case 9: totalBookingAmount(); break;
            case 10: elaborations(); break;
            case 11: printf("Exit\n"); break;
            default: printf("Invalid Number\n"); break;
        }

    } while (choice != 11);
}

int main(void) {
    showmenu();
    return 0;
}



//ESAME 

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

