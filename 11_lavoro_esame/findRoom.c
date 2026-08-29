#include <stdio.h>
#include <string.h>

//#define MAX[100]

//struct Room {
//    numberRoom[MAX];
//}


int findRoom(struct Room archive, int count) {


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

