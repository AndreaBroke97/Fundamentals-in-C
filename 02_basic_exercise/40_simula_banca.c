#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    printf("\n[esercizio n40]\n");
    //simula un bancomat
    
    int option, state;
    float counter, value;
    
    do {
    	printf("benvenuto nel bancomat! seleziona una delle opzioni \n");
    	printf("1) prelievo \n 2) deposito \n 3) controlla saldo \n 4) uscire dal bancomat \n");
    	scanf("%d", &option);
		switch (option)
	{
	
	case 1 :
		printf("selezionare importo da prelevare: ");
		scanf("%f", &value);
		counter = counter -= value;
		break;
	case 2:
		printf("selezionare importo da depositare: ");
		scanf("%f", &value);
		counter+=value;
		break;
	case 3:
		printf("saldo attuale: %.2f \n", counter);
		break;
	case 4:
		printf("saldo attuale: %.2f \n", counter);
		break;
		
	default:
		printf("selezionare opzione valida! \n");
		break;

}

}
while (option!=4); {
	
}
return 0;

}

