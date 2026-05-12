#include <stdio.h>

    int main(){

        float consumo = 0;
        float valor = 0;

        printf("Consumo em m³: ");
        scanf("%f", &consumo);

        if (consumo <= 10){
        valor = consumo = 22.38;
        printf("Valor = %.2f", valor);
    } else if (consumo <= 20){
        valor = consumo * 3.50;
        printf("Valor = %.2f", valor);
    } else if (consumo <= 50){
        valor = consumo * 8.75;
        printf("Valor = %.2f", valor);
    } else {
        valor = consumo * 9.64;
        printf("Valor = %.2f", valor);
    }
    
        return 0;
    }   