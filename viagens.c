#include <stdio.h>

    int main(){

        //printf("quantos km vai correr?"); 0,50 por km até 200km; 0,45 a partir

        float dista, acima, abaixo;

        
        printf("Qual distância será pecorrida?: KM ");
        scanf("%f", &dista);
        
        acima = dista * 0.50;
        abaixo = dista * 0.45; 
        
        if (dista >= 200){
            printf("Preço da passagem: R$ %.2f", acima);
        } else {
            printf("Preço da passagem: R$ %.2f", abaixo);
        }

        return 0;
    }