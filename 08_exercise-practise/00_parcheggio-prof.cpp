#include <stdio.h>

int main() {
	
	int minutesStop;
	printf("insert minutes of stop: ");
	scanf("%d", &minutesStop);
	
	if (minutesStop < 0) {
		printf("the minutes isn't positive. \n");
	} else if (minutesStop <= 30) {
		printf("you have stopped for %d minutes.\n", minutesStop);
		printf("the price of stop is 1$");
	} else if (minutesStop <= 120) {
		printf("you have stopped for %d minutes.\n", minutesStop);
		printf("the price of stop is 3$");
	} else {
		int minutesExtra = minutesStop - 120;
		
		//arrotondamento per eccesso
		int hourExtra = (minutesExtra + 59) / 60;
		int price = 3 + hourExtra;
																																																																																																																																																																																																																												\	
		printf("you have stopped for %d minutes.\n", minutesExtra);
		printf("the price of stop is %d$.\n", price);
	}
	
return 0;
}
