#include <stdio.h>

int main () {
	
int a = 40;
int b = 30;
int c = 50;
int d = 155;
int max;

max = a;
	
	if (b > max) {
	max = b;
	}
	
	if (c > max) {
	max = c;
	}
	
	if (d > max) {
	max = d;
	}

	printf("il numero maggiore tra %d, %d, %d e %d risulta %d\n", a, b, c, d, max);
	
	
	
	
	return 0;
}
