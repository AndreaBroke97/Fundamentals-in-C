
/* Media di tre numeri (a coppie) */
//esercizio 1
#include <stdio.h>   // Libreria per printf e scanf

// Funzione che calcola la media tra due numeri
	float avg(float a, float b) {
    // formula della media
    return (a + b) / 2; //a è b sono due valori temporanei che copiano i valori dichiarati sotto ad esempio, x, y. MA a è b non sono x è y
    /* float --> il valore restituito è un numero decimale (con le virgole)
	avg --> nome della funzione
	(float a, float b) --> parametri (numeri che riceve)
	return  --> restituisce il risultato 
	prende due numeri | fa la media | restituisce il risultato */
}

	int main(void) {

    // Dichiarazione di tre variabili decimali
    float x, y, z;

    // Chiediamo all'utente di inserire tre numeri
    printf("Inserisci tre numeri:\n");

    // Leggiamo i tre numeri
    // & serve per salvare il valore nella variabile
    scanf("%f%f%f", &x, &y, &z);

    // Calcolo e stampa della media tra x e y
    printf("La media di %f e %f è: %f\n", x, y, avg(x, y)); 
	//ES: si fa (20 + 61) / 2, non si dive 20 + 61 / 2 ma il risultato dei due che fa 81 / 2
    
    /* chiamate alla funzione | avg(x, y) 
	Qui stai:
	passando x e y alla funzione

    la funzione calcola la media

	il risultato viene messo dentro il printf 
*/	

    // Calcolo e stampa della media tra y e z
    printf("La media di %f e %f è: %f\n", y, z, avg(y, z));

    // Calcolo e stampa della media tra x e z
    printf("La media di %f e %f è: %f\n", x, z, avg(x, z));
    
	/*	Se scrivi:
	2, 4 ,6;
	allora:
	x = 2
	y = 4
	z = 6 
*/

//la media viene eseguita perchè si fa la somma dei valori ad esempio, x + y oppure x + y + z diviso per il numero dei valori
//se sono 2 valori x, y si fa diviso 2 cioe / 2 oppure se sono 3,  / 3

    return 0;  // Fine del programma
}
