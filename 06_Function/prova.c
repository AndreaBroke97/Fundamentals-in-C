#include <stdio.h>

void stampaMenu()
{
    printf("MENU");
    printf("\n1) divisione");
    printf("\n2) moltiplicazione");
    printf("\n3) somma");
    printf("\n4) sottrazione");
    printf("\ninserisci l'operazione che vuoi eseguire: ");
}

float leggiValore(){
	int numero;
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
    return (float)numero;
}

float divisione(float num1, float num2) {
	float result;
		printf("\nHai scelto DIVISIONE!\n");
			
        if (num2 == 0){
       		printf("ERRORE!!! Stai tentando di dividere per 0");
        	return 0;
		}
    result = num1/(float)num2;
        
    printf("Result: %.2f", result);
        
	return result;
}

float moltiplicazione(float num1, float num2) {
	printf("\nHai scelto MOLTIPLICAZIONE!\n");
	
    float result = num1*num2;
    
	printf("Result: %.2f", result);
	
	return result;
}

float somma(float num1, float num2){
	printf("\nHai scelto SOMMA!\n");
	
	return num1 + num2;
}

float sottrazione(float num1, float num2){
	printf("\nHai scelto SOTTRAZIONE!\n");
	
	return num1 - num2;
}

// Simulare un menu con più opzioni usando un ciclo.
int main()
{
    int choice;
    float num1;
    float num2;
    
    stampaMenu ();
    scanf("%d", &choice);
    
    printf("\nOra inserirai i numeri sui quali vuoi eseguire l'operazione\n");
    
    num1 = leggiValore();
    num2 = leggiValore();

    switch (choice) {
        case 1:{
        divisione(num1, num2);
        break; 
    	}
    
    	case 2:{
    	moltiplicazione(num1, num2);
    	break;
		}
		
		case 3: {
		somma(num1, num2);	
		break;
		}
		
		case 4: {
		sottrazione(num1, num2);
		break;
		}
    	default: {
    		printf("\noperazione non consentita");
			break;
		}
    }
}