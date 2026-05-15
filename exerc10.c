#include <stdio.h>

    int main(){

        float salario, aumento, novo;
        int porc;

        printf("Digite o salário: ");
        scanf("%f", &salario);

        if (salario <= 1000){
            porc = 20;
        }

        else if (salario <= 1700){
            porc = 15;
        }

        else if (salario <= 2300){
            porc = 10;
        }

        else {
            porc = 5;
        }

        aumento = salario * porc / 100;
        novo = salario + aumento;

        printf("Salário inicial: R$ %.2f\n", salario);
        printf("Aumento: R$ %.2f (%d%%)\n", aumento, porc);
        printf("Novo salário: R$ %.2f\n", novo);

    return 0;
  }