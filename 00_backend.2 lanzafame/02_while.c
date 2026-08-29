#include <stdio.h>

int main() {
    
    int num;

    printf("insert numbers (0 for exit):\n");
    scanf("%d", &num);

    while (num != 0) {
        printf("hai inserito: %d\n", num);
        scanf("%d", &num); //rileggi
    }

    printf("Fine!\n");

    return 0;
}