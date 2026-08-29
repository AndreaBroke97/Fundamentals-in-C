#include <stdio.h>

int main () {
	
	int n, result;
	
	printf("insert an int number: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= 10; i++) {
		result = n * i;
		printf("%d x %d = %d\n", n, i, result);
	}
	
	printf("fine\n");

return 0;	
}
