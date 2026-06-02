#include <stdio.h>

    int main (){

// loop "for"

        for(int c=0; c < 6; c++){
            printf("%d", c);
        }

// Loop "while"
        
        int bateria = 0;
        int valorcarregado = 0;

        while(bateria < 100){
            printf("\n** CARGA DE BATERIA **");
            printf("\nA bateria esta %d porcento carregada", bateria);
            printf("\nDigite quanto foi carregado: ");
            scanf("%d", &valorcarregado);

            bateria = bateria + valorcarregado;
        }
        
        printf("\n\nBateria carregada!");
        
// Loop "do"

        printf("\n\n** PALPITE PARA COPA **\n");

    int votoportugal = 0;    
    int votobrasil = 0;   
    int votoespanha = 0;
    int opcao;   

        do{
            printf("\n ** QUAL O SEU VOTO? **");
            printf("\n 1 - Portugal");
            printf("\n 2 - Brasil");
            printf("\n 3 - Espanha");
            printf("\n 0 - Encerrar a votação");
            printf("\n--------> ");
            scanf("%d", &opcao);

            if (opcao == 1){
                votoportugal++;
            } 

            if(opcao == 2){
                votobrasil++;
            }
        
            if(opcao == 3){
                votoespanha++;
            }

            if(opcao == 0){
                printf("\nVotação encerrada!\n");
                break;
            }
        }while (opcao != 0);

        printf("\nVotos Portugal: %d\n", votoportugal);
        printf("Votos Brasil: %d\n", votobrasil);
        printf("Votos Espanha: %d\n", votoespanha);


        return 0;
    }