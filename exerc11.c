#include <stdio.h>

    int main (){

        float x, z, c, v, media, nota;

        printf("1ª Nota: ");
        scanf("%f", &x);
        printf("2ª Nota: ");
        scanf("%f", &z);
        printf("3ª Nota: ");
        scanf("%f", &c);
        printf("4ª Nota: ");
        scanf("%f", &v);

        media = x + z + c + v;
        nota = media / 4;
        
        printf("Sua Média = %.2f", nota);

        if(nota >= 9 & nota <= 10){
            printf("\nNota A' APROVADO!");
        }
        if(nota >= 7.5 & nota <= 8.9){
            printf("\nNota B' APROVADO!");
        }
        if(nota >= 6 & nota <= 7.4){
            printf("\nNota C' APROVADO!");
        }
        if(nota >= 4.0 & nota <= 5.9){
            printf("\nNota D' REPROVADO!");
        }
        if(nota >= 0 & nota <= 3.9){
            printf("\nNota E' REPROVADO!");
        }

        return 0;

        
    }
