#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main () {
	
	int x = 2004;
	int b = 2005;
	
	bool condition = (x % 2 == 0 && x < 200) || (x %2 == 1 && x > 2000);
	
	if ( x < b && b < x) {
		printf("ciao");
	}else if ((x > b) || (b > x)) {
		printf("bravo ci sei riuscito");
	}


return 0;
}
