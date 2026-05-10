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
            return 0;
        } 
            if (imc <= 17){
            printf("Magreza moderada.");
            return 0;
        } 
            if (18.5 >= imc){
            printf("Magreza leve.");
            return 0;
        } 
            if (25 >= imc){
            printf("Saudável.");
            return 0;
        } 
            if (30 >= imc){
            printf("Sobrepeso.");
            return 0;
        } 
            if (35 >= imc){
            printf("Obesidade Grau I.");
            return 0;
        } 
            if (40 >= imc){
            printf("Obesidade Grau II (severa).");
            return 0;
        } 
            else {
            printf("Obesidade Grau III (mórbida)!.");
        }

        return 0;


    }