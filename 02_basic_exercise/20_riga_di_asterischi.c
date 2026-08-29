#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n20]\n");
    
  
    int n, i;
    
      
    printf("inserisci quanti asterischi vuoi: ");
    scanf("%d", &n);
    
    for (i = 1; i<=n; i++){
    	printf("*");
    	
	}
	
	printf("\n");
	return 0;
}
