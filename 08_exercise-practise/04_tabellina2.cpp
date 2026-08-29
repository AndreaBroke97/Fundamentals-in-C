#include <stdio.h>

int main () {
	
	int n, var, result;
	
	printf("insert an int number: ");
	scanf("%d", &n);
	
	printf("insert the second int number: ");
	scanf("%d", &var);
	
	for (int i = 1; i <= var; i++) {
	
		result = n * i;
		printf("%d x %d = %d\n", n, i, result);
	}
		printf(":D\n");
	
return 0;
}
