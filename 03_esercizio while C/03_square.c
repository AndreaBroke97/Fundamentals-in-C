#include <stdio.h>
/* questo è un ciclo*/
int main() {
	           
	int i = 1;  /*numero è il valore */ 
	int n, quadrato;   
	
	printf("Inserisci il numero di righe: ");
	scanf("%d", &n);
	
	while (i <= n) {
		quadrato = i * i;                   
		printf("%d\n", quadrato);  
		i++;
	}
}


/*%d sta per "decimal integer" (numero intero).
Dice al programma: "Preparati, perché l'utente scriverà un numero intero dai tasti".
Se volessi leggere un numero con la virgola, useresti %f (float).*/

/*&n (L'Indirizzo)
Questa è la parte più curiosa. La & (e commerciale) in C significa "indirizzo di".
Pensa alla memoria del tuo computer come a un enorme hotel con migliaia di stanze numerate. 
Quando hai dichiarato int n;, il computer ha riservato una stanza per quel numero, ma tu non sai quale sia il numero della stanza (es. Stanza 1045).
n è il nome della stanza (facile per noi umani).
&n è l'indirizzo fisico (il numero della porta) dove si trova la variabile.*/

/*Quando scrivi scanf("%d", &n);, stai dicendo:
"Prendi il numero intero che l'utente scrive (%d) e vai a consegnarlo proprio all'indirizzo della stanza di n (&n)".*/

/*n printf("%d", n);: Non serve la & perché il programma deve solo "guardare" cosa c'è dentro la scatola e mostrarlo.
In scanf("%d", &n);: Serve la & perché il programma deve "entrare" nella scatola per depositarci dentro un nuovo valore.*/

/*se dimentichi la &?
Il programma compilerà quasi sempre, ma quando proverai a inserire il numero, il computer probabilmente andrà in crash (il famoso Segmentation Fault).
Questo perché cercherà di scrivere il numero in un posto a caso della memoria invece che nella stanza corretta!*/

 /*square e quadrato e possiamo usare qualsiasi parola, ma per aiutarci, */    
 /*visto che dobbiamo trovare il quadrato dei numeri tipo 2 al quadrato fa 4 usiamo square ed è la parola che collega */
 /* il quadrato/square è una variabile a cui diamo dei dati */
 
 /*Se vedi simboli di confronto come(minore uguale) <=, >= (maggiore uguale), == (uguale a) o != (diverso da), quasi certamente sei davanti a una condizione.

Se vedi un nome seguito da un solo = (esempio quadrato = ...), stai facendo un'assegnazione a una variabile.*/

/*Il codice inizia preparando tre "scatole" nella memoria:i = 1: Questa è la nostra base di partenza. La useremo per contare.n: 
Qui memorizzeremo il limite scelto dall'utente.quadrato: Qui salveremo il risultato dell'operazione i x i.*/

/*printf("Inserisci il numero di righe: ");
scanf("%d", &n);
Il programma si ferma e aspetta che tu digiti un numero. Se scrivi 3, la variabile n diventa 3.
Questo significa che vogliamo vedere i primi 3 quadrati.*/

/* Il while (che significa "finchè") dice al computer: "Finché la condizione tra parentesi è vera,
continua a ripetere tutto quello che c'è dentro le parentesi graffe".
Cosa succede "dentro" il ciclo (Esempio con n = 3):
Giro 1:
Controllo: i è 1. È vero che 1 (maggore uguale di) <_ 3? Sì.

Calcolo: quadrato = 1 * 1 (quindi 1).
Stampa: Scrive "1" sullo schermo.
Incremento (i++): Questa è la parte fondamentale. i diventa 2.

Giro 2:
Controllo: i è 2. È vero che 2 (maggiore uguale di) <_  3? Sì.
Calcolo: quadrato = 2 * 2 (quindi 4).
Stampa: Scrive "4" sullo schermo.
Incremento: i diventa 3.
Giro 3:
Controllo: i è 3. È vero che 3 (maggiore uguale di) <_ 3? Sì.
Calcolo: quadrato = 3 * 3 (quindi 9).
Stampa: Scrive "9" sullo schermo.
Incremento: i diventa 4.
Fine:Controllo: i è 4. È vero che 4 (maggiore uguale di) <_ 3? No! * Il ciclo si interrompe e il programma finisce.*/ 

/*In sintesi:
i = 1: Il punto di partenza.

i <= n: Il muro contro cui sbattere per fermarsi. (La condizione è un test logico (una domanda a cui il computer può rispondere solo con "Sì" o "No").

i++: Il passo in avanti per non restare bloccati all'infinito sullo stesso numero.

Nota Bene: Se dimenticassi di scrivere i++, il valore di i rimarrebbe sempre 1.
Il computer continuerebbe a stampare "1" all'infinito (questo si chiama loop infinito).*/
