#include <stdio.h>
#include <ctype.h>

int main() {
	
	printf("\n[esercizio n8]\n");
	
	char lettera;
	

	printf("inserisci una lettera: ");
	scanf("%c", &lettera);
	
	lettera = tolower(lettera);
	
	if(lettera >= 'a' && lettera <= 'z'){
	
	
	if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u') {
		printf("%c e una vocale", lettera);
	
	} else  {
	
	  printf("%c e una consonante", lettera);
	}

	} 
	else {
		printf("carattere non valido", lettera);
	}

	
return 0;	
}
