#include <stdio.h>
#include <string.h>

// COUNTDOWN
/*int main() {

    int i;

    printf("insert a number: ");
    scanf("%d", &i);

    do {
        printf("\n%d", i);
        i++;
    } while (i != 1 );

    return 0;
}*/

//   ------------------------------------

// VALIDATING INPUT
/*int main() {

    int n;

    do {
        printf("insert one number: ");
        scanf("%d", &n);
        printf("hai inserito: %d\n", n); 
    } while (n < 1 || n > 10);

        printf("number valid: %d\n", n);
    
    return 0;
}*/

//   ------------------------------------

// SUM
/*int main() {

    int n;
    int sum = 0;

    do {
        printf("insert one number (0 to stop): ");
        scanf("%d", &n);
        sum = sum + n;
    } while (n != 0);

    printf("total sum is: %d\n", sum);

    return 0;
}*/

//   ------------------------------------

// GUESS THE NUMBER
/*int main() {

    int n;

    do {
        printf("indovina il numero: ");
        scanf("%d", &n);

          if (n < 7) {
            printf("Too low\n");
        } else if (n > 7) {
            printf("Too high\n");
        }

    } while (n != 7);
        printf("CORRECT\n");
    
    return 0;
}*/

//   ------------------------------------

// REPEAT MENU WITH FUNCTION

/*void showMenu() {
    printf("1. Say hello\n");
    printf("2. Say goodbye\n");
    printf("3. Exit\n");
}

int main() {
    int choose;

    do {
        showMenu(); //richiamiamo la funzione di sopra
        scanf("%d", &choose);

        if (choose == 1) {
            printf("Hello!\n");
        } else if (choose == 2) {
            printf("Goodbye!\n");
        } else if (choose != 3) {
            printf("Invalid option\n");
        }
            
    } while (choose != 3);

        printf("bye!\n");

    return 0;
}*/

//   ------------------------------------

// COUNTDOWN WITH MESSAGE
/*int main() {

    int n;

    printf("insert a number: ");
    scanf("%d", &n);


    do {
        printf("%d\n -", n);

        if (n % 2 == 0) {
            printf("Even\n");
        } else {
            printf("Odd\n");
        } 
        n--;
    } while (n > 0);

        printf("BOOM!\n");

    return 0;
}*/

/*int main() {

   int age = 0;
   
    do {
        printf("Inserisci la tua età: ");
        scanf("%d", &age);
    } while (age <= 0);

}*/

/*int main() {

    int age;

    do {
        printf("insert you'r age: ");
        scanf("%d", &age);
    } while (age != 18);
    
    if (age == 18) {
        printf("i am an adult");
    } while (age < 18);
        printf("i am young");


}*/

/*#define MAX_STUDENTS 100

int main() {

    int students;
    float media_votes;

    printf("insert the number of students:\n");
    scanf("%d", &students);

    char names[MAX_STUDENTS][50]; // Array per i nomi degli studenti a cui limitiamo max [50] caratteri
    float votes[MAX_STUDENTS]; // Array per i voti degli studenti

    int j = 0;
    do {
        printf("insert the name and the grade of student %d: \n", j+1);
        fgets(names[j], 50, stdin); // Per accedere a un elemento dell'array, devi utilizzare l'indice corrispondente. 
        //leggendo il nome dello studente
        scanf("%f", &votes[j]);
        j++;

    } while (j < students);

    do {
        printf("insert the grade of the students:\n");
        scanf("%f", &media_votes);

        if (media_votes <= 0) {
            printf("the grade must superior to 0\n");
        }

    } while (media_votes <= 0);

    //stampa i nomi dei studenti con un voto superiore alla media
    for (int j = 0; j < students; j++) {
        if (votes[j] > media_votes) {
            printf("\nName of student have grade above average is: %s\n", names[j]);
        }
    }

    return 0;
}*/



/*#define MAX_STUDENTS 100 //macro per definire la grandezza dell'array
//la macro e una direttiva del preprocessore che serve a dire al compilatore "quando vedi questo codice converti MAX_STUDENT con il valore 100"

int main() {
    int students;
    float sum_votes = 0.0; // Variabile per sommare i voti e calcolare la media in automatico
    float media_votes;

    // 1. Validazione dell'input degli studenti
    do {
        printf("Insert the number of students (max %d):\n", MAX_STUDENTS);
        scanf("%d", &students);
        
        if (students <= 0 || students > MAX_STUDENTS) {
            printf("Error: the number must be between 1 and %d.\n", MAX_STUDENTS);
        }
    } while (students <= 0 || students > MAX_STUDENTS);

    char names[MAX_STUDENTS][50]; //array con cui memorizzare i nomi degli studenti, con un limite di 50 caratteri per nome
    float votes[MAX_STUDENTS];

    // PULIZIA DEL BUFFER: essenziale dopo la prima scanf
    while (getchar() != '\n'); 

    // 2. Lettura dei nomi e dei voti
    for (int j = 0; j < students; j++) {
        printf("\nInsert the name of student %d:\n", j + 1);
        fgets(names[j], 50, stdin); //stdin è utilizzata per leggere input dall'utente attraverso la tastiera
        
        // Rimuove l'odioso carattere '\n' catturato da fgets
        names[j][strcspn(names[j], "\n")] = 0; //strcspn calcola la lunghezza del testo memorizzato nella variabile input

        printf("Insert the grade of student %d:\n", j + 1);
        scanf("%f", &votes[j]);
        
        // PULIZIA DEL BUFFER: essenziale prima della prossima fgets
        while (getchar() != '\n'); 
        
        // Aggiungo il voto appena inserito al totale
        sum_votes += votes[j];
    }

    // 3. Calcolo automatico della media
    media_votes = sum_votes / students;
    printf("\n----------------------------------------\n");
    printf("The average grade of the class is: %.2f\n", media_votes);
    printf("----------------------------------------\n");

    // 4. Stampa gli studenti sopra la media
    printf("\nStudents with a grade above average:\n");
    for (int j = 0; j < students; j++) {
        if (votes[j] > media_votes) {
            printf("- %s (Grade: %.2f)\n", names[j], votes[j]);
        }
    }

    return 0;
}*/