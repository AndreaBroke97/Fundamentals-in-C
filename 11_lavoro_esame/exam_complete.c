// BLOCCO 1 LE LIBRERIE

#include <stdio.h>

// Libreria per pulire il terminale
#include <stdlib.h>

// Libreria per la gestione delle stringhe
#include <string.h>


/////////////////////////////////////////////////////////////////////


// BLOCCO 2 LE MACRO
#define MAX 100
#define TYPE_LENGTH 10
#define NAME_LENGTH 50


/////////////////////////////////////////////////////////////////////



// BLOCCO 3 struttura che racchiude dei campi di dati
//di tipi diversi, non uguali come gli array
struct Room {
    int numberRoom;
    int roomNumber;          
    char typeRoom[TYPE_LENGTH]; //imponiamo un limite con la macro 
    int maxGuests;           
    float priceForNight;     
    int numNightsBooked;     
    char statusRoom[10];         
    char guestName[NAME_LENGTH]; //imponiamo un limite con la macro 
};


/////////////////////////////////////////////////////////////////////


int takeChoice(void) {

    int choice;
    scanf("%d", &choice);
    return choice;
}


int findRoom(struct Room archive[MAX], int count) {


    int numberRoom;
        printf("insert the number of the room for searching: ");
        scanf("%d", &numberRoom);

            for(int i = 0; i < count - 1; i++){

                if (numberRoom == archive[i].numberRoom) {
                    return i;   
            }

        }
        
    return -1;
}   

/////////////////////////////////////////////////////////////////////


// BLOCCO 5 stampa benvenuto andando automaticamente a capo con puts
void welcomeMessage (void) {

    puts("Welcome to the hotel, please select one of the following options !");

}


/////////////////////////////////////////////////////////////////////


// BLOCCO 6 questa funzione esegue solo la stampa del menù
void printMenu () {
    
    printf("\n1. Insert new room\n");
    printf("2. Show all rooms\n");
    printf("3. Search room by number\n");
    printf("4. Update price per night\n");
    printf("5. Update booked nights\n");
    printf("6. Update room status\n");
    printf("7. Register booking\n");
    printf("8. Register check-out\n");
    printf("9. Calculate total booking amount for one room\n");

    puts("\nType of operations:");
    printf("10. Calculate total theoretical revenue\n");
    printf("11. Count rooms by type\n");
    printf("12. Find room with highest booking amount\n");
    printf("13. Calculate average nightly price\n");

    printf("\nEnter 0 to exit\n");

    printf("\nYour Choice: ");

}


/////////////////////////////////////////////////////////////////////


// BLOCCO 7 funzione che permette l'inserimento di una nuova camera
int insertNewRoom (struct Room archive[MAX], int count) {
//int perchè ritorna il contatore che incrementa ritornando un numero
    if (count == MAX) {
//se il contatore e uguale a 100 essendp pieno non si può
//inserire un altra camera e ritorna il contatore che non cambia
        puts("Impossible to insert a new room!");
        puts("Reason: Archive is Full");
        return count;

    } else{
//quando l'archivio non è pieno permette l'inserimento di una camera
//con tutti i dati 
        puts("To insert a new room you must enter some values:");

        printf("\nRoom number: ");
        scanf("%d", &archive[count].roomNumber);
//archive(cassetto con 100 scomparti) [count](va nel prossimo scomparto libero)"
//.roomNumber(accede al campo "numero della camera di quello scomparto")
        printf("Type of room: ");
        scanf("%s", archive[count].typeRoom);

        printf("Max guests: ");
        scanf("%d", &archive[count].maxGuests);

        printf("Price per night: ");
        scanf("%f", &archive[count].priceForNight);

        printf("Number of nights booked: ");
        scanf("%d", &archive[count].numNightsBooked);

        printf("Status of the room: ");
        scanf("%s", archive[count].statusRoom);

        printf("Guest name: ");
        scanf("%s", archive[count].guestName);

        count++;
        return count;

    }
    
};


/////////////////////////////////////////////////////////////////////


// BLOCCO 8 funzione che mostra tutte le camere
void showAllRooms (struct Room archive[MAX], int count) {
//riceve ingresso un array di struct chiamato archive con
//un massimo di 100 elementi e un intero chiamato count
    for (int i = 0; i < count; i++) {
//il for gira finchè i e minore di 3: i=0, i=1, i=2, le 3 camere inserite
//ad ogni giro del for stampa tutti i dati della camera quando si sceglie showAllRooms
        printf("Number:%d\n", archive[i].roomNumber);
        printf("Type Room:%s\n", archive[i].typeRoom);
        printf("Max Guests:%d\n", archive[i].maxGuests);
        printf("Price per night:%.2f\n", archive[i].priceForNight);
        printf("Nights booked:%d\n", archive[i].numNightsBooked);
        printf("Status:%s\n", archive[i].statusRoom);
        printf("Guest Name:%s\n", archive[i].guestName);
        puts("--------------------");
    }
}


/////////////////////////////////////////////////////////////////////


// BLOCCO 9 funzione che cerca le stanze
void searchRoom (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to search for: ");
    scanf("%d", &numberRoom);
    
    for (int i = 0; i < count; i++) {
//if (scorre tutti gli scomparti e per ognuno controlla 
//"questa camera ha il numero che cerca l'utente?" se si stampa
// e si ferma con return senò continua a cercare)
        
        findRoom(archive, count);

            printf("Number:%d\n", archive[i].roomNumber);
            printf("Type Room:%s\n", archive[i].typeRoom);
            printf("Max Guests:%d\n", archive[i].maxGuests);
            printf("Price per night:%.2f\n", archive[i].priceForNight);
            printf("Nights booked:%d\n", archive[i].numNightsBooked);
            printf("Status:%s\n", archive[i].statusRoom);
            printf("Guest Name:%s\n", archive[i].guestName);

            return; //esce dalla funzione

        }
        printf("Room number %d does not exist!", numberRoom);
    }




/////////////////////////////////////////////////////////////////////


// BLOCCO 10 funzione che aggiorna il prezzo per notte
void updatePriceForNight (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to update the price: ");
    scanf("%d", &numberRoom);

    for (int i = 0; i < count; i++) {

        findRoom(archive, count);

            float updatePrice;
            printf("Insert the new price: ");
            scanf("%f", &updatePrice);

            archive[i].priceForNight = updatePrice;
//prendi il vecchio prezzo nell'archivio e cambialo con il nuovo prezzo inserito dall'utente e salvalo
//nel campo price for night che sta dentro archive[i]
// della camera trovata è un assegnazione sovrascrivendo il vecchio prezzo con quello nuovo

            return;
            
        }
        printf("Room number %d does not exist!", numberRoom);
    }

   


/////////////////////////////////////////////////////////////////////


// BLOCCO 11 funzione che aggiorna le notti prenotate
void updateBookedNights (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to update the number of booking nights: ");
    scanf("%d", &numberRoom);

    for (int i = 0; i < count; i++) {
//scorre tutte le camere inserite e poi if controlla se è corretto
        findRoom(archive, count);
//if: prendi il nuovo numero di notti inserito dall'utente e salvalo nel campo numNightsBooked della camera trovata
            int updateNights;
            printf("Enter the new number of bookings for night: ");
            scanf("%d", &updateNights);

            archive[i].numNightsBooked = updateNights;

            return;
            
        }
        printf("Room number %d does not exist!", numberRoom);
    }


/////////////////////////////////////////////////////////////////////


// BLOCCO 12 funzione che aggiorna lo stato della camera
void updateStautusRoom (struct Room archive[MAX], int count) {
//int count e il numero di camere inserite fin'ora e serve per sapere 
//al FOR quante camere scorrere senza andare oltre
    int numberRoom;
    printf("Enter the room number to update the status of room: ");
    scanf("%d", &numberRoom);

    for (int i = 0; i < count; i++) {

        findRoom(archive, count);

            printf("Enter the new status of room: ");
            scanf("%s", archive[i].statusRoom);
//scanf legge la stringa inserita dall'utente e la salva nel campo
//statusRoom trovata nell'archivio
            return;
            
        }
        printf("Room number %d does not exist!", numberRoom);
    }


/////////////////////////////////////////////////////////////////////


// BLOCCO 13 funzione che effettua il checkIn
void checkIn (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number for which you want to check in: ");
    scanf("%d", &numberRoom);

    for (int i = 0; i < count; i++) {

        findRoom(archive, count);

            if (strcmp(archive[i].statusRoom , "occupied") == 0){
//strcmp confronta due stringhe restituendo 0 se sono uguali
//se lo stato è occupied stampa:
                printf("The selected room is occupied !");

            } else{
//altrimenti
                strcpy(archive[i].statusRoom, "occupied");
//strcpy copia occupied all'interno del campo statusRoom della camera trovata
//e come fare = ma per le stringhe
                printf("Enter your name: ");
                scanf("%s", archive[i].guestName); 
                printf("Number of nights: ");
                scanf("%d", &archive[i].numNightsBooked);

                return;

            }
        }
        printf("Room number %d does not exist!", numberRoom);
    }

  

/////////////////////////////////////////////////////////////////////


// BLOCCO 14 funzione che permette un checkOut
void checkOut (struct Room archive[MAX], int count) {
// int count e il numero delle camere inserite ed il for
//scompone gli scomparti nelle camere inserite
    int numberRoom;
    printf("Enter the room number to check out: ");
    scanf("%d", &numberRoom);

    for (int i = 0; i < count; i++) {

        findRoom(archive, count);
//controlla se il numero inserito dall'utente corrisponde al campo
            if (strcmp(archive[i].statusRoom , "available") == 0){
//strcmp restituisce 0 se sono uguali "se la camera è già disponibile"
                printf("The selected room is already available!");

            } else {
//altrimenti strcpy effettua la copia di available e la sovrascrive
//con il valore nuovo
                strcpy(archive[i].statusRoom, "available");
//sostituendo quella di prima occupied con available
                strcpy(archive[i].guestName, "");
//cancella il nome del cliente sovrascrivendolo con nulla è una stringa vuota
                archive[i].numNightsBooked = 0;

                return;
            }
        }
        printf("Room number %d does not exist!", numberRoom);
    }

   

/////////////////////////////////////////////////////////////////////


// BLOCCO 15 funzione che esegue l'importo totale della prenotazione
float totalBookingAmount (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number: ");
    scanf("%d", &numberRoom);

    for (int i = 0; i < count; i++) {
        
        findRoom(archive, count);

            float operation = archive[i].priceForNight * archive[i].numNightsBooked;
            
            printf("The total amount to be paid is: %.2f", operation);

            return operation;
        }
        printf("Room number %d does not exist!", numberRoom);
        return 0.0;
    }



/////////////////////////////////////////////////////////////////////


// BLOCCO 16 funzione che esegue il ricavo totale teorico
float totalTheoreticalRevenue (struct Room archive[MAX], int count) {

    float total = 0;

    for (int i = 0; i < count; i++) {

        if (strcmp(archive[i].statusRoom , "occupied") == 0) {

            float operation = archive[i].priceForNight * archive[i].numNightsBooked;

            total += operation;
        }
    }

    printf("Theoretical total: %.2f", total);
    return total;
}


/////////////////////////////////////////////////////////////////////


// BLOCCO 17 funzione che conta quante camere ci sono per ogni tipo (single, double, triple suite)
void countRoomsByType (struct Room archive[MAX], int count) {

    int singleRooms = 0;
    int doubleRooms = 0;
    int tripleRooms = 0;
    int suiteRooms = 0;
// contatori / variabili che partono da 0 perchè non contengono nulla
    for (int i = 0; i < count; i++) {

        if (strcmp(archive[i].typeRoom, "single") == 0) {

            singleRooms ++;

        }else if (strcmp(archive[i].typeRoom, "double") == 0) {

            doubleRooms ++;
            
        } else if (strcmp(archive[i].typeRoom, "triple") == 0){

            tripleRooms ++;

        } else if (strcmp(archive[i].typeRoom, "suite") == 0) {

            suiteRooms ++;
        
        }
    }

    printf("Single rooms: %d\n", singleRooms);
    printf("Double rooms: %d\n", doubleRooms);
    printf("Triple rooms: %d\n", tripleRooms);
    printf("Suite rooms: %d\n", suiteRooms);
}


/////////////////////////////////////////////////////////////////////


// BLOCCO 18 funzione che trova il più alto importo di una prenotazione
float findHighestBookingAmount (struct Room archive[MAX], int count) {

    float max = 0.0;
    int numberRoom;

    for (int i = 0; i < count; i++) {

        float operation = archive[i].priceForNight * archive[i].numNightsBooked;

        if (operation > max) {

            max = operation;

            numberRoom = archive[i].roomNumber;
        }
    }
//max e numberRoom vengono aggiornati assieme perchè
//si deve  sapere quale camera ha l'importo più alto
    printf("Room %d is the most expensive\n", numberRoom);
    printf("Cost per night = %.2f", max);

    return max;
}


/////////////////////////////////////////////////////////////////////


// BLOCCO 19 funzione che esgue la media del prezzo a notte
float averageNightlyPrice (struct Room archive[MAX], int count) {

    float totalPrice = 0.0;

    for (int i = 0; i < count; i++) {

        totalPrice += archive[i].priceForNight;

    }

    float countRooms = totalPrice / count;
//crea una variabile float countRooms e salva il risultato del totalPrice diviso count
//così si esegue la media e ritorna countRooms
    printf("The average price per night of the registered rooms is: %.2f", countRooms);

    return countRooms;
}


/////////////////////////////////////////////////////////////////////


// BLOCCO 20
void startProgram(void) {

    welcomeMessage();

    struct Room archive[MAX]; //array di struct
    int count = 0;

    int choice;

    do {
        system("cls"); //pulisce il terminale tornando sul menù

        printMenu();

        choice = takeChoice();

        switch (choice) {

            case 1:
                printf("You selected to insert a new room\n");
                count = insertNewRoom(archive, count);
// count = funzione perchè la funzione ritorna il nuovo valore di count aggiornato
// dopo aver inserito la camera senò rimarrebbe 0 se non si mette
// archive, count sono parametri che passi alla funzione
//archive (cassetto con le camere) e count il contatore
                break;

            case 2:
                printf("You selected to show all rooms\n");
                showAllRooms(archive, count);
                system("pause"); 
//system pause in automatico blocca il programma mostrando press any key to continue
                break;

            case 3:
                printf("You selected to search room by number\n");
                searchRoom(archive, count);
                system("pause");
                break;

            case 4:
                printf("You selected to update price per night\n");
                updatePriceForNight(archive, count);
                system("pause");
                break;

            case 5:
                printf("You selected to update booked nights\n");
                updateBookedNights(archive,count);
                system("pause");
                break;

            case 6:
                printf("You selected to update room status\n");
                updateStautusRoom(archive,count);
                system("pause");
                break;

            case 7:
                printf("You selected to register booking\n");
                checkIn(archive,count);
                system("pause");
                break;

            case 8:
                printf("You selected to register check-out\n");
                checkOut(archive,count);    
                system("pause");
                break;

            case 9:
                printf("You selected to calculate total booking amount for one room\n");
                totalBookingAmount(archive,count);
                system("pause");
                break;

            case 10:
                printf("You selected to calculate total theoretical revenue\n");
                totalTheoreticalRevenue(archive,count);
                system("pause");
                break;

            case 11:
                printf("You selected to count rooms by type\n");
                countRoomsByType(archive, count);
                system("pause");
                break;

            case 12:
                printf("You selected to find room with highest booking amount\n");
                findHighestBookingAmount(archive, count);
                system("pause");
                break;

            case 13:
                printf("You selected to calculate average nightly price\n");
                averageNightlyPrice(archive, count);
                system("pause");
                break;

            case 0:
                system("cls");
                printf("See you Later!\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }

    } while (choice != 0);
}


/////////////////////////////////////////////////////////////////////


// BLOCCO 21 funzione main che starta il codice
int main (void) {

    startProgram();

    return 0;
}