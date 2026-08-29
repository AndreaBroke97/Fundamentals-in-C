#include <stdio.h>


//dichiarazione di array interi
/*int main(void) {
    int values[5];
    
    values[0] = 10;
    values[1] = 20;
    values[2] = 30;
 

    printf("%d\n", values[0]);
    printf("%d\n", values[4]);

    return 0;
}
*/


// 
/*int main(void) {
    int numbers[5] = {2, 4, 6, 8, 10};

    printf("%d\n", numbers[2]);

    return 0;
}
*/

//array intero con risultato di quanti bite ha l'array
/*int main(void) {
    int numbers[] = {1, 3, 5, 7};
    //restituisce un valore di tipo size_t
    printf("%zu bite\n", sizeof(numbers) / sizeof(numbers[0]));

    return 0;
}*/

//scansione con ciclo
int main(void) {
    int values[4] = {11, 22, 33, 44};
    int i;

    for (i = 0; i < 4; i = i + 1) {
        printf("values[%d] = %d\n", i, values[i]);
    }

    return 0; 
}