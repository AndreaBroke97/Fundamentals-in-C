#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
	
//	int x =2;
	//int y = x < 5 ? 500 : 100; //questo e un operatore ternario
	//x e minore di 5 ? se si y diventa 500 altrimenti 100
//	int y = 2000;
//	bool sendX = true; //algebra boleana
//	if (x < 5) { //questo e un classico if
		
//		y = 500;
//	}
//	else {
//		y = 100;
//	}
	
//printf("%d", !sendX ? x : y); //ho negato sendX così diventa falso e manda a schermo y cioè 2000 senò essendo true mandava x cioè 2
//un'altra casistica può essere else if invece di if else.

	int x =2;
	int Y = (x < 5) ? 5  : (x >= 10 && x <= 20) ? 10 : 100; 
       //condizione  if  else ///////////////if  ?  if 2 condizione (10) else 2 condizione (100)
	printf("%d", y); 
	
	return 0;
}
