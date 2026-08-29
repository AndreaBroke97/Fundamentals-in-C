#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n21]\n");
    
    int numbers;
    int sum = 0;
    
    printf("insert one number: ");
    scanf("%d", &numbers);
    
    while (numbers != 0) {
    	sum += numbers;
    	
    	printf("insert the second number: ");
		scanf("%d", &numbers);
		
	}
	printf("the total is %d\n", sum);

	
	return 0;
}
