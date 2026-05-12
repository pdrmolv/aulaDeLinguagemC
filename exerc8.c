#include <stdio.h>
#include <math.h>

    int main(){

        float num1, num2, resultado;
        int opcao;

        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Potência\n");
        printf("6 - Raiz quadrada\n");
        printf("7 - Número par/ímpar\n");
        printf("0 - sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);


        printf("Primeiro Valor: ");
        scanf("%f", &num1);
        printf("Segundo Valor: ");
        scanf("%f", &num2);

        switch (opcao){
            case 1: printf("%.2f + %.2f = %.2f", num1, num2, (num1+num2));
            break;
            case 2: printf("%.2f - %.2f = %.2f", num1, num2, (num1-num2));
            break;
            case 3: printf("%.2f * %.2f = %.2f", num1, num2, (num1*num2));
            break;
            case 4: if (num2 != 0)printf("%.2f / %.2f = %.2f", num1, num2, (num1/num2));
                    else(printf("Não divide por zero!"));
            break;
            case 5: printf("pow(%.2f, %.2f = %.2f)", num1, num2, (pow(num1,num2)));
            break;
            case 6: if (num1 >= 0) resultado = sqrt(num1); printf("%.2f", resultado);
            break;
            case 7: printf("Digite um numero inteiro: ");    scanf("%f", &num1);
    if((int)num1 % 2 == 0) {
        printf("%.0f e PAR\n", num1);
    } else {
        printf("%.0f e IMPAR\n", num1);
    }
    break;

    break;
            case 0: printf("Você saiu.");
            break;
            default: (printf("Opção invalida!"));                 
        }
        return 0;
    }