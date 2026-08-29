#include <stdio.h>

// BLOCCO 1: sum of even and odd

//funzione somma 1
/*
int sumEven(int v[], int n) {
   int sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            sum += v[i];
        }
       
    }

    return sum;
}
//funzione sum 2
int sumOdd(int v[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 != 0) {
            sum += v[i];
        }
    }

    return sum;
}


//main di avvio
int main(void) {
    int n;
    int v[10];

    printf("how many numbers do you want to enter: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("Somma Pari: %d\n", sommaPari(v, n));
    printf("Somma Dispari: %d\n", sommaDispari(v, n));
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 2: Major, minor and difference


/*
// Funzione MAX
int searchMax(int v[], int n) {
    int max = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
}
    return max;
}


// Funzione MIN
int searchMin(int v[], int n) {
    int min = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}


// Funzione DIFF
int calculDifference(int max, int min) {
    return max - min;
}

// AVVIO
int main(void) {
    int v[10];
    int n;

    printf("how many numbers do you want to enter: ");
        scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("The max is: %d\n", searchMax(v, n));
    printf("The min is: %d\n", searchMin(v, n));
    printf("The difference is: %d\n", calculDifference(searchMax(v, n), searchMin(v, n)));
}
*/


////////////////////////////////////////////////////////////////////


//BLOCCO 3: count the valor above and below of average
/*
float calculateAVG(int v[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    return (float)sum / n;

}   



int countMaxAvg(int v[], int n, float average) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > average) {
            count++;
        }
    }
    return count;
}


int countMinAvg(int v[], int n, float average) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < average) {
            count++;
        }
    }
    return count;
}



int countEqualsAvg(int v[], int n, float average) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ((float)v[i] == average) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int v[10];
    int n;
    

    printf("how many numbers do you want to enter: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    float average = calculateAVG(v, n);

    printf("the calculate of average is: %f\n", average);
    printf("the max of average is: %d\n", countMaxAvg(v, n, average));
    printf("the min of average is: %d\n", countMinAvg(v, n, average));
    printf("the equals of average is: %d\n", countEqualsAvg(v, n, average));
    

    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 4: copy only positve numbers
/*
int copyPositive(int origin[], int destination[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (origin[i] > 0) {
            destination[j] = origin[i];
                j++;
        }
    }
    return j;
}


int main(void) {
    int origin[10];
    int destination[10];
    int n;

    printf("how many numbers do you want to enter: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &origin[i]);
    }

    int count = copyPositive(origin, destination, n);
    for (int i = 0; i < count; i++) {
        printf("\nThe valid number is: ");
        printf("\n%d\n", destination[i]);
    }
    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 5: inversion of array
/*

n = 10

void invertArray(int array[], int n) {
    int temp;
    for (int i = 0; i < n/2; i++) {
        //n/2 divide a metà le posizioni dell'array permettendo di non "ri-scambiare i numeri inseriti"
        temp = array[i]; //salvo il valore v[i] nella variabile
        array[i] = array[n-1-i]; //sovrascrivo v[i] con n-1 che conduce all'ultimo numero inserito Esempio e 5? quindi
//(1, 2, 3, 4, 5) prende (5) inserendo tutto all'inverso ed il -i ogni volta che aumenta di 1 diminuisce di 1 | se e 0 è 5 | se è 1 e 4
        ; //lo risalva nella variabile dove è salvato v[i]
    }
}

int main(void) {
    int v[10];
    int n;

    printf("how many numbers do you want to enter: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) { //riempimento normale dell'array
        scanf("%d", &v[i]);
    }

    invertArray(v, n);

    for (int i = 0; i < n; i++) { //riempimento inverso dell'array con richiamo della funzione di sopra
        printf("\n%d ", v[i]);
    }

    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 6: sostitution of the negative value
/*
void sostNeg(int v[], int n) {
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            v[i] = 0;
        }
    }
}

int main(void) {

    int v[10];
    int n;

    printf("how many numbers do you want to enter: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    sostNeg(v, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 7: frequence of a value

/*
int countOccurence(int v[], int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == value) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int v[10];
    int n;
    int value;

    
    printf("how many numbers do you want to enter: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }


    printf("what is the value you want to look for: ");
    scanf("%d", &value);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("\nValue searched: %d\n", value);
    printf("Occurrences: %d\n", countOccurence(v, n, value));


    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//Another Exercise
/*
void caricaArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void stampaArray(int v[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    
    
}


int main(void) {
    int v[10];
    int n;

    printf("enter numbers: ");
    scanf("%d", &n);

    caricaArray(v, n);
    stampaArray(v, n);
   

   return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 8: verify if array is growing
// array1 [1, 2, 1, 4, 5]
/*
int isGrowing(int array1[], int n) {
    for (int i = 1; i < n; i++) {
        if (array1[i] < array1[i-1]) {
            return 0;
        }
    }
    return 1;
}


int main(void) {
    int v[10];
    int n;

    printf("enter numbers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    printf("1 = growing | 0 = not-growing | : %d\n",isGrowing(v, n));

    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 9: Fusion of two array
// array1 [1, 2, 3, 4, 5]
// array2 [6, 7, 8, 9, 10]
// array3 iniziale [ , , , , , , , , ,]


// array3 finale [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

/*
void fusionArray(int array1[], int array2[], int array3[], int n) {
    for (int i = 0; i < n; i++) {
        array3[i] = array1[i];
        array3[n+i] = array2[i]; 
// con n+i intendiamo, che n essendo = 5 con i primi 5 numeri di array 1, 
//più i che farà partire dal 6 numero in poi

    }

}

int main(void) {
    int a[5];
    int b[5];
    int c[10];
    int n = 5;

    printf("\nenter first five numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("enter second five numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    fusionArray(a, b, c, n);

    printf("\nmerged array: ");
    for (int i = 0; i < n*2; i++) {
        printf("%d ", c[i]);
    }


    return 0;
}
*/

////////////////////////////////////////////////////////////////////

//BLOCCO 10: menu of operation on array

void printArray(int array1[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }
}


int sumArray(int array1[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += array1[i];
    }
    return result;
}


float calculateAvg(int array1[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array1[i];
    } 
   return sum / n;
}


int searchMax(int array1[], int n) {
    int max = array1[0];
    for (int i = 0; i < n; i++) {
        if (array1[i] > max) {
            max = array1[i];
        }
    }
    return max;
}


int searchMin(int array1[], int n) {
    int min = array1[0];
    for (int i = 0; i < n; i++) {
        if(array1[i] < min) {
            min = array1[i];
        }
    }
    return min;
}


int countEven(int array1[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array1[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}



int main(void) {
    int array1[10];
    int n;
    int choice;

    printf("\nenter numbers for array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    
    

    

do {

    printf("\n/////--------MENU--------/////\n");
    printf("1) Print array\n");
    printf("2) Calculate sum\n");
    printf("3) Calculate average\n");
    printf("4) search Maximum\n");
    printf("5) Search minimal\n");
    printf("6) Count numbers even\n");
    printf("0) Exit\n");

    printf("\nchoose an operation from the menu: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printArray(array1, n);
            break;
        case 2:
            printf("\nThe total sum is: %d\n", sumArray(array1, n));
            break;
        case 3:
            printf("\nThe average of sum is: %f\n", calculateAvg(array1, n));
            break;
        case 4:
            printf("\nThe average of sum is: %d\n", searchMax(array1, n));
            break;
        case 5:
            printf("\nThe average of sum is: %d\n", searchMin(array1, n));
            break;
        case 6:
            printf("\nThe count of even numbers is: %d are Even\n", countEven(array1, n));
            break;
        case 0:
            printf("\nQuitting");
            return 0;
        default:
            printf("invalid choice");
            break;
    }
} while (choice != 0);

    return 0;
}