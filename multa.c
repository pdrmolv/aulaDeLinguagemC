#include <stdio.h>

    int main(){

     //pergunte a velo do carro; se velo > 80km/m printf("MULTADO!"); 50 por cada km/h > de 80km/h
       float velo, dife, multa;

     printf("Qual a velocidade da lataria?: KM/h ");
     scanf("%f", &velo);
     
     dife = velo - 80;
     multa = dife * 50;

    if (velo > 80){
        printf("---MULTADO!---\n");
        printf("Voçê correu %.0f KM/h acima do permitido!\n", dife);
        printf("Valor final da multa: R$ %.0f", multa);
    }
    
    else{
        printf("CERTINHO!");
    }

        return 0;
    }