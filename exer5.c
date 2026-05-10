#include <stdio.h>
#include <math.h>

    int main(){

        float peso, altura, imc;

        printf("Peso: ");
        scanf("%f", &peso);
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        imc = peso / pow(altura, 2);
        
        if (imc < 16){
            printf("Magreza grave!");
        } 
            if (imc <= 17){
            printf("Magreza moderada.");
        } 
            if (18.5 >= imc){
            printf("Magreza leve.");
        } 
            if (25 >= imc){
            printf("Saudável.");
        } 
            if (30 >= imc){
            printf("Sobrepeso.");
        } 
            if (35 >= imc){
            printf("Obesidade Grau I.");
        } 
            if (40 >= imc){
            printf("Obesidade Grau II (severa).");
        } 
            else {
            printf("Obesidade Grau III (mórbida)!.");
        }
                        // nao sei colocar o "a", entao o primeiro resultado é a resposta.
return 0; }
