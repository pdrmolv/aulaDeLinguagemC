#include <stdio.h>

    int main(){
        
        int x, z, c, sair;
        
        printf("1 . OPÇÃO 1\n");
        printf("2 . OPÇÃO 2\n");
        printf("3 . OPÇÃO 3\n");
        printf("4 . SAIR\n");

        printf("Digite uma opção: ");
        scanf("%d", &x, &z, &c, &sair);

        if (x == 1){
            printf("Você selecionou a opção 1");
        }
                

        if (x == 2){
            printf("Você selecionou a opção 2");
        }
                

        if (x == 3){
            printf("Você selecionou a opção 3");
        }
                

        if (x == 4){
            printf("Você selecionou sair");
        } 
        
        if (x > 4){                           
            printf("Opção inválida!");
        }

        if (x < 1){
            printf("Opção inválida!!!");
        }
        
           printf("\nFIM DO PROGRAMA!");
        
        return 0;
    }