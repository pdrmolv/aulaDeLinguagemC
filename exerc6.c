#include <stdio.h>

    int main(){

        float x, z, c; 

        printf("Lado 1: ");
        scanf("%f", &x);

        printf("Lado 2: ");
        scanf("%f", &z);

        printf("Lado 3: ");
        scanf("%f", &c);

        if ((x <= 0) & (z <= 0) & (c <= 0)){
            printf("Não é possivel formar um triângulo!");
            return 0;
        } 

        if ((x == z) & (x == c) & (z == c)){
            printf("Triângulo Equilátero");
        }
        
        else if ((x != z) & (x != c) & (z != c)){
            printf("Triângulo Escaleno");
        }
        
        else{
            printf("Triângulo Isósceles");
        }

             // nao sei como fazer quando, por exemplo "0, 10, -1". Eu sei que n da pra formar
                                                                // um triangulo com valores negativos.
return 0;   }
