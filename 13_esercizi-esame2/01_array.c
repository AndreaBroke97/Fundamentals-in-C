#include <stdio.h>



void refillArray(int v[], int n) {

    for (int i = 0; i < n; i++) {
        printf("enter values: \n");
        scanf("%d", &v[i]);
    }

}

void printArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n%d ", v[i]);
    }
}
    
void printPosition(int v[], int n) {
    int num;

    printf("enter the position of a number: ");
    scanf("%d", &num);


    for (int i = 0; i < n; i++) {
        if (v[i] == num) {
            printf("found at position: %d\n", i);
            return;
        }
    }
    printf("number not found\n");
}



int main(void) {
    int v[10];
    int n = 10;

    refillArray(v, n);
    printArray(v, n);
    printPosition(v, n);

    return 0;
}