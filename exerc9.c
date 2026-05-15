#include <stdio.h>

    int main(){

        
        char turno;

        printf("M: Matutino\n");
        printf("V: Vespertino\n");
        printf("N: Noturno\n");
        
        printf("Em que turno voçê estuda?\n");
        scanf ("%c", &turno);

        if (turno == 'M'){
            printf("Bom dia!");
        }
        else if (turno == 'V'){
            printf("Boa tarde!");
        }
        else if (turno == 'N'){
            printf("Boa noite!");
        }
        else{
            printf("Valor Inválido!");
        }
        
        
        return 0;
    }
