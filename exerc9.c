#include <stdio.h>

    int main (){

        printf("Em que turno você estuda?\n");

        printf("M - Matutino\n");
        printf("V - Vespertino\n");
        printf("N - Noturno\n");

            char horario, M, V, N;

        printf("Resposta: ");
        scanf("%c", &horario);

        switch (horario){
        case 1: if (horario == M) printf("Bom dia!");
            break;
        case 2: if (horario == V) printf("Boa tarde!");
            break;
        case 3: if (horario == N) printf("Boa noite!");
            break;
        
        default: printf("Invalido!");
            break;
        }

                                    //    INCOMPLETO
        return 0;
    }
