#include <stdio.h>

    int main(){

        float consumo = 0;
        float valor = 0;

        printf("Seu consumo: ");
        scanf("%f", &consumo);

        if (consumo <= 10){
        valor = consumo = 44.95;
        printf("Valor = R$ %.2f", valor);
    } else if (consumo <= 20){
        valor = consumo * 8.75;
        printf("Valor = R$ %.2f", valor);
    } else if (consumo <= 50){
        valor = consumo * 16.76;
        printf("Valor = R$ %.2f", valor); 
    } else{
        valor = consumo * 17.46;
        printf("Valor = R$ %.2f", valor);
    }
        return 0;
    }