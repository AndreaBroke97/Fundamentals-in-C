#include <stdio.h>

int main() {
	
	printf("\n[esercizio n7]\n");
	
    int year;
    
    printf("inserisci un anno: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { //usiamo and && ed or ||, dividiamo la variabile per 4 uguale a 0,
	    printf("%d e un anno bisestile", year);                    //divido per 100 diverso da 0 oppure divido per 400 uguale a 0
	}else {                                                        //!= (Diverso da): Controlla che l'anno non sia un centenario (es. 1900).
		printf("%d e un anno ordinario", year);
	}
   
    

    return 0;
}
	
	
	
	
	
	

