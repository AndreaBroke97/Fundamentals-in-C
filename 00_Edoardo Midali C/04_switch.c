#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h> //serve per far vedere gli accenti tipo ì,è,à

int main() {

 setlocale(LC_ALL, "");

	int giornosettimana = 1;
	
	switch(giornosettimana) {
		case 1:
		printf("lunedì");
		break;
		
		case 2:
		printf("martedì");
		break;
		
		case 3:	
		printf("mercoledì");
		break;
		
		case 4:
		printf("giovedì");
		break;
		
		case 5:
		printf("venerdì");
		break;
		
		case 6:
		printf("sabato");
		break;
		
		case 7:
		printf("domenica");
		break;
		
		default:
		printf("non ci sono più di 7 giorni");
		break;
	}
	

return 0;
}
