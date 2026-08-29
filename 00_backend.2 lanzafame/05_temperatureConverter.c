#include <stdio.h>

float celsius_to_fahrenheit(float cf) {
    return(cf * 9.0/5.0) + 32;
}
float fahrenheit_to_celsius(float fc) {
    return(fc - 32) * 5.0/9.0;
}
float celsius_to_kelvin(float ck) {
    return ck + 273.15;
}

int main(void) {

    int choice;
    float n1;

    do{

        

            printf("\n---MENU---\n");
            printf("1. Celsius -> Fahrenheit\n2. Fahrenheit -> Celsius\n3. Celsius -> Kelvin\n0. Exit\n");
            printf("insert a number: ");
            scanf("%d", &choice);  // ← manca questo!

            if (choice < 0 || choice > 3 ) {
                printf("Invalid choice, please try again.");
            }
        
        switch(choice) {
            case 1:
                printf("insert celsius 1: ");
                scanf("%f", &n1);
                printf("result: %.2f F\n", celsius_to_fahrenheit(n1));
                break;
            case 2:
                printf("insert fahrenheit: ");
                scanf("%f", &n1);
                printf("result: %.2f F\n", fahrenheit_to_celsius(n1));
                break;
            case 3:
                printf("insert Celsius 2: ");
                scanf("%f", &n1);
                printf("result: %.2f F\n", celsius_to_kelvin(n1));
                break;
            case 0:
                printf("exit\n");
                break;         
            }
   
        } while (choice != 0);

    return 0;
}