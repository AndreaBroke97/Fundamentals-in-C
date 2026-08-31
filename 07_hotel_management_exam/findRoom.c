#include <stdio.h>
#include <string.h>

#define MAX 100

struct Room {
    int numberRoom;
};

int findRoom(struct Room archive[], int count) {
    int numberRoom;
    printf("insert the number of the room for searching: ");
    scanf("%d", &numberRoom);
    for (int i = 0; i < count; i++) {
        if (numberRoom == archive[i].numberRoom) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    struct Room archive[MAX];
    int count;

    printf("how many rooms do you want to enter: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Enter number for room %d: ", i);
        scanf("%d", &archive[i].numberRoom);
    }

    int index = findRoom(archive, count);

    if (index == -1) {
        printf("Room not found!\n");
    } else {
        printf("Room found at position: %d\n", index);
    }

    return 0;
}
