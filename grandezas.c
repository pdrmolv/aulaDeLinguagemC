#include <stdio.h>

    int main(){

        int grandeza;

    printf("******************************\n");
    printf("CALCULO DE GRANDEZAS ELETRICAS\n");
    printf("******************************\n");
    printf("1. Tensao (em Volt)\n");
    printf("2. Resistencia (em Ohm)\n");
    printf("3. Corrente (em Ampere)\n");
    printf("4. Sair do programa\n");
    printf("******************************\n");

    int resistencia, corrente, tensao, resultado1, resultado2, resultado3;

    printf("Qual grandeza deseja calcular?\n");
    scanf("%d", &grandeza);

    switch (grandeza)
    {
        case 1:
        printf("Resistencia: ");
        scanf("%d", &resistencia);
        printf("Corrente: ");
        scanf("%d", &corrente);
        
        resultado1 = resistencia * corrente;
        
        printf("Tensao = %d", resultado1);
        break;
        
        case 2:
        printf("Tensao: ");
        scanf("%d", &tensao);
        printf("Corrente: ");
        scanf("%d", &corrente);
        
        resultado2 = tensao * corrente;
        
        printf("Resistencia = %d", resultado2);
        break;

        case 3:
        printf("Resistencia: ");
        scanf("%d", &resistencia);
        printf("Tensao: ");
        scanf("%d", &tensao);
        
        resultado3 = resistencia * tensao;
        
        printf("Corrente = %d", resultado3);
        break;

        case 4: 
        printf("Voce saiu.");
        break;
    
        default: printf("Invalido!");
        break;
    }    

    printf("\nFim do programa!");
    
        return 0;
    }