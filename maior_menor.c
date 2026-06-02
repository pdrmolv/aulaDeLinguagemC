#include <stdio.h>

int main(){
    
    // botar 3 numeros, falar qual o maior, menor, soma, media entre eles.
    int num1, num2, num3, soma, media, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    media = soma / 3;

    if(num3 > num2 & num3){
        printf("MAIOR: %d\n", num3);
    }
    else if(num2 > num1 & num3){
        printf("MAIOR: %d\n", num2);
    }
    else if (num1 > num2 & num1){
        printf("MAIOR: %d\n", num1);
    }

    if(num3 < num2 & num1){
        printf("MENOR: %d\n", num3);
    }
    else if(num2 < num1 & num3){
        printf("MENOR: %d\n", num2);
    }
    else if (num1 < num2 & num3){
        printf("MENOR: %d\n", num1);
    }

    printf("SOMA: %d\n", soma);
    printf("MEDIA: %d\n", media);

        return 0;
    }