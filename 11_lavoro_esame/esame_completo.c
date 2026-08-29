// BLOCCO 1 
#include <stdio.h>

// Libreria per pulire il terminale
#include <stdlib.h>

// Libreria per la gestione delle stringhe
#include <string.h>

// MACRO
#define MAX 100
#define TYPE_LENGTH 10
#define NAME_LENGTH 50


/////////////////////////////////////////////////////////////


// BLOCCO 2
struct Room {

    int roomNumber;          
    char typeRoom[TYPE_LENGTH];        
    int maxGuests;           
    float pricePerNight;     
    int numNightsBooked;     
    char statusRoom[10];         
    char guestName[NAME_LENGTH];

};


/////////////////////////////////////////////////////////////


// BLOCCO 3
int takeChoice(void) {

    int choice;
    scanf("%d", &choice);
    return choice;
}


/////////////////////////////////////////////////////////////


// BLOCCO 4
int findRoom(struct Room archive[MAX], int count, int numberRoom) {

    for (int i = 0; i < count; i++) {

        if (numberRoom == archive[i].roomNumber){

            return i;
        } 
          
    }

    return -1;
}


/////////////////////////////////////////////////////////////


// BLOCCO 5
void printMenu (void) {

    printf("\n1. Insert new room\n");
    printf("2. Show all rooms\n");
    printf("3. Search room by number\n");
    printf("4. Update price per night\n");
    printf("5. Update booked nights\n");
    printf("6. Update room status\n");
    printf("7. Register booking (Check-in)\n");
    printf("8. Register check-out\n");
    printf("9. Calculate total booking amount for one room\n");

    puts("\nType of operations:");
    printf("10. Calculate total theoretical revenue\n");
    printf("11. Count rooms by type\n");
    printf("12. Find room with highest booking amount\n");
    printf("13. Calculate average nightly price\n");

    printf("\nEnter 0 to EXIT\n");

    printf("\nYour Choice: ");

}


/////////////////////////////////////////////////////////////


// BLOCCO 6
int insertNewRoom (struct Room archive[MAX], int count) {

    int numberRoom;

    if (count == MAX) {
        puts("Impossible to insert a new room!");
        puts("Reason: Archive is Full");
        return count;
    }

    puts("To insert a new room you must enter some values:");
        
    printf("\nRoom number: ");
    scanf("%d", &numberRoom);

    if (findRoom(archive, count, numberRoom) != -1) {
        puts("Error: Room already exists!");

        system("pause");
        return count;
    }

    // se la condizione risulta falsa assegna il valore a numberRoom
    archive[count].roomNumber = numberRoom;

    printf("Type of room: ");
    scanf("%s", archive[count].typeRoom);

    printf("Max guests: ");
    scanf("%d", &archive[count].maxGuests);

    printf("Price per night: ");
    scanf("%f", &archive[count].pricePerNight);

    strcpy(archive[count].statusRoom, "available");

    count++;
    return count;
}


/////////////////////////////////////////////////////////////


// BLOCCO 7
void showAllRooms (struct Room archive[MAX], int count) {

    for (int i = 0; i < count; i++) {
        
        printf("Number:%d\n", archive[i].roomNumber);
        printf("Type Room:%s\n", archive[i].typeRoom);
        printf("Max Guests:%d\n", archive[i].maxGuests);
        printf("Price per night:%.2f\n", archive[i].pricePerNight);
        printf("Nights booked:%d\n", archive[i].numNightsBooked);
        printf("Status:%s\n", archive[i].statusRoom);
        printf("Guest Name:%s\n", archive[i].guestName);
        puts("--------------------");
    }
}


/////////////////////////////////////////////////////////////


// BLOCCO 8
void searchRoom (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to search for: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);
    
    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return;
    }

    printf("Number:%d\n", archive[index].roomNumber);
    printf("Type Room:%s\n", archive[index].typeRoom);
    printf("Max Guests:%d\n", archive[index].maxGuests);
    printf("Price per night:%.2f\n", archive[index].pricePerNight);
    printf("Nights booked:%d\n", archive[index].numNightsBooked);
    printf("Status:%s\n", archive[index].statusRoom);
    printf("Guest Name:%s\n", archive[index].guestName);

}


/////////////////////////////////////////////////////////////


// BLOCCO 9
void updatePricePerNight (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to update the price: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);

    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return;
    }

    float updatePrice;
    printf("Insert the new price: ");
    scanf("%f", &updatePrice);

    archive[index].pricePerNight = updatePrice;
}


/////////////////////////////////////////////////////////////


// BLOCCO 10
void updateBookedNights (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to update the number of booking nights: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);

    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return;
    }

    int updateNights;
    printf("Enter the new number of bookings per night: ");
    scanf("%d", &updateNights);

    archive[index].numNightsBooked = updateNights;
            
}


/////////////////////////////////////////////////////////////


// BLOCCO 11 
void updateStautusRoom (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to update the status of room: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);

    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return;
    }

    printf("Enter the new status of room: ");
    scanf("%s", archive[index].statusRoom);

}


/////////////////////////////////////////////////////////////


// BLOCCO 12
void checkIn (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number for which you want to check in: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);

    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return;
    }

    if (strcmp(archive[index].statusRoom , "occupied") == 0){
        
        printf("The selected room is occupied !");
    
    } else{
        
        strcpy(archive[index].statusRoom, "occupied");

        printf("Enter your name: ");
        scanf("%s", archive[index].guestName);

        printf("Number of nights: ");
        scanf("%d", &archive[index].numNightsBooked);

        return;
    }
}


/////////////////////////////////////////////////////////////


// BLOCCO 13
void checkOut (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number to check out: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);

    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return;
    }


    if (strcmp(archive[index].statusRoom , "available") == 0){
        
        printf("The selected room is already available!");

    } else{
        
        strcpy(archive[index].statusRoom, "available");
        strcpy(archive[index].guestName, "");
        archive[index].numNightsBooked = 0;
        
        return;
    }

}


/////////////////////////////////////////////////////////////


// BLOCCO 14
float totalBookingAmount (struct Room archive[MAX], int count) {

    int numberRoom;
    printf("Enter the room number: ");
    scanf("%d", &numberRoom);

    int index = findRoom(archive, count, numberRoom);

    if (index == -1) {
        printf("Room number %d does not exist!", numberRoom);
        return 0.0;
    }
    
    float operation = archive[index].pricePerNight * archive[index].numNightsBooked;
    printf("The total amount to be paid is: %.2f", operation);

    return operation;
}


/////////////////////////////////////////////////////////////


// BLOCCO 15
float totalTheoreticalRevenue (struct Room archive[MAX], int count) {

    float total = 0;

    for (int i = 0; i < count; i++) {

        if (strcmp(archive[i].statusRoom , "occupied") == 0) {

            float operation = archive[i].pricePerNight * archive[i].numNightsBooked;

            total += operation;
        }
    }

    printf("Theoretical total: %.2f", total);
    return total;
}


/////////////////////////////////////////////////////////////


// BLOCCO 16
void countRoomsByType (struct Room archive[MAX], int count) {

    int singleRooms = 0;
    int doubleRooms = 0;
    int tripleRooms = 0;
    int suiteRooms = 0;

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


/////////////////////////////////////////////////////////////


// BLOCCO 17
float findHighestBookingAmount (struct Room archive[MAX], int count) {

    float max = 0.0;
    int numberRoom;

    for (int i = 0; i < count; i++) {

        float operation = archive[i].pricePerNight * archive[i].numNightsBooked;

        if (operation > max) {

            max = operation;

            numberRoom = archive[i].roomNumber;
        }
    }

    printf("Room %d is the most expensive\n", numberRoom);
    printf("Cost per night = %.2f", max);

    return max;
}


/////////////////////////////////////////////////////////////


// BLOCCO 18
float averageNightlyPrice (struct Room archive[MAX], int count) {

    float totalPrice = 0.0;

    for (int i = 0; i < count; i++) {

        totalPrice += archive[i].pricePerNight;

    }

    float countRooms = totalPrice / count;

    printf("The average price per night of the registered rooms is: %.2f", countRooms);

    return countRooms;
}


/////////////////////////////////////////////////////////////


//BLOCCO 19
void startProgramHotel(void) {

    struct Room archive[MAX]; 
    int count = 0;

    int choice;

    do {

        system("cls");

        printMenu();

        choice = takeChoice();

        switch (choice) {

            case 1:
                system("cls");
                printf("You selected to insert a new room\n\n");
                count = insertNewRoom(archive, count);
                break;

            case 2:
                system("cls");
                printf("You selected to show all rooms\n\n");
                showAllRooms(archive, count);
                system("pause");
                break;

            case 3:
                system("cls");
                printf("You selected to search room by number\n");
                searchRoom(archive, count);
                system("pause");
                break;

            case 4:
                system("cls");
                printf("You selected to update price per night\n");
                updatePricePerNight(archive, count);
                system("pause");
                break;

            case 5:
                system("cls");
                printf("You selected to update booked nights\n");
                updateBookedNights(archive,count);
                system("pause");
                break;

            case 6:
                system("cls");
                printf("You selected to update room status\n");
                updateStautusRoom(archive,count);
                system("pause");
                break;

            case 7:
                system("cls");
                printf("You selected to register booking\n");
                checkIn(archive,count);
                system("pause");
                break;

            case 8:
                system("cls");
                printf("You selected to register check-out\n");
                checkOut(archive,count);    
                system("pause");
                break;

            case 9:
                system("cls");
                printf("You selected to calculate total booking amount for one room\n");
                totalBookingAmount(archive,count);
                system("pause");
                break;

            case 10:
                system("cls");
                printf("You selected to calculate total theoretical revenue\n");
                totalTheoreticalRevenue(archive,count);
                system("pause");
                break;

            case 11:
                system("cls");
                printf("You selected to count rooms by type\n");
                countRoomsByType(archive, count);
                system("pause");
                break;

            case 12:
                system("cls");
                printf("You selected to find room with highest booking amount\n");
                findHighestBookingAmount(archive, count);
                system("pause");
                break;

            case 13:
                system("cls");
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


/////////////////////////////////////////////////////////////


//BLOCCO 20
int main (void) {

    startProgramHotel();

    return 0;
}