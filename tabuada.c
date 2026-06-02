#include <stdio.h>

    int main(){
//Desenvolver um programa que calcule e exiba a tabuada de hum a dez de um número qualquer.
    
        int x;

        printf("Digite o valor para a tabuáda: ");
        scanf("%d", &x);
        printf(".......TABUÁDA DO %d!.......\n", x);
        printf("        1 x %d = %d\n    ", x, 1 * x);
        printf("    2 x %d = %d\n    ", x, 2 * x);
        printf("    3 x %d = %d\n    ", x, 3 * x);
        printf("    4 x %d = %d\n    ", x, 4 * x);
        printf("    5 x %d = %d\n    ", x, 5 * x);
        printf("    6 x %d = %d\n    ", x, 6 * x);
        printf("    7 x %d = %d\n    ", x, 7 * x);
        printf("    8 x %d = %d\n    ", x, 8 * x);
        printf("    9 x %d = %d\n    ", x, 9 * x);
        printf("    10 x %d = %d\n    ", x, 10 * x);
        
        return 0;
    }