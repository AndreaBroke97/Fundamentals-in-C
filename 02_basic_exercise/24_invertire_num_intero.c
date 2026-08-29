#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n24]\n");

//Invertire un numero intero (es. 123 ? 321).
	int numero, cifra;  //numero: Quello che inserisce l'utente (es. 123).
	//cifra: Per salvare momentaneamente l'ultimo pezzetto che stacchiamo.
	int invertito = 0;//invertito: Dove costruiremo il numero finale. Attenzione: questa deve partire da 0
	
	printf("insert a int number: ");
	scanf("%d", &numero);
	
	// Usiamo un while: finché il numero è diverso da 0...
    while (numero != 0) {
        
        // 1. Estrai l'ultima cifra (usa %)
        cifra = numero % 10;
        
        // 2. Costruisci il numero invertito (moltiplica per 10 e aggiungi)
        invertito = (invertito * 10) + cifra;
        
        // 3. Accorcia il numero originale (usa /)
        numero = numero / 10;
        
    }

    printf("Il numero invertito è: %d\n", invertito);
	
	return 0;
}
	
	
	/* In base 10, se dividi un numero per 10, il resto della divisione è sempre l'ultima cifra a destra.
	123 % 10 = 12 con resto 3.
	In C, scriviamo cifra = numero % 10;. Questo è il nostro modo di "afferrare" l'ultimo mattoncino.
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	 Il "Costruttore" (invertito * 10 + cifra)Questa è la parte più difficile da digerire. 
	 Immagina di avere già il 3 e di voler aggiungere il 2 per farlo diventare 32.
	 Non puoi fare 3 + 2 (farebbe 5).Devi "spostare" il 3 a sinistra per fargli spazio. 
	 Come? Moltiplicandolo per 10!$$3 \times 10 = 30     
	 30 + 2 = 32Ecco perché facciamo invertito = (invertito * 10) + cifra;. 
	 Ogni volta che aggiungiamo una cifra, "spingiamo" quelle già presenti verso sinistra (nelle decine, poi nelle centinaia, ecc.).
	 
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 
	 o "Sminuzzatore" (/ 10)Ora che abbiamo usato il 3, non ci serve più. 
	 Dobbiamo "accorciare" il numero originale.
	 In C, la divisione tra numeri interi taglia i decimali:123 / 10 = 12 (il .3 sparisce).
	 Così al prossimo giro del ciclo, lavoreremo sul 12.
	 
	 
	 
	 Passo,Numero originale,Operazione % (Cifra),Invertito (Costruzione),Operazione / (Nuovo numero)
Inizio,123,-,0,-
Giro 1,123, 123 % 10 = 3,(0×10) + 3 = 3,123 /10 = 12
Giro 2, 12, 12 %10 = 2,(3×10)+ 2= 32, 12 /10 = 1
Giro 3, 1, 1 % 10 = 1, (32×10) + 1 = 321, 1 /10 = 0*/
	
