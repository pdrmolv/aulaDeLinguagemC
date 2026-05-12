#include <stdio.h>

    int main(){

        float consumo = 0;
        float valor = 0;
        
        printf("Informe seu consumo em m³");
        scanf("%f", &consumo);

        if (consumo <= 10){
            printf("Consumo = R$7.59");
        } else if (consumo <= 20){
            valor = consumo * 1.31;
            printf("Valor = %.2f", valor);
        } else if(consumo <= 30){
            valor = consumo * 4.64;
            printf("Valor = %.2f", valor);
        } else if(consumo <= 50){
            valor = consumo * 6.62;
            printf("Valor = %.2f", valor);
        } else {
            valor = consumo * 7.31;
            printf("Valor = %.2f", valor);
        }
        return 0;
    }