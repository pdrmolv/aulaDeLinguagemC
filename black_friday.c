#include <stdio.h>

int main(){

    float valortotal, valordesconto;
    int formapagamento;

    printf("Preço total da venda: ");
    scanf("%f", &valortotal);

    printf("\n ___ FORMAS DE PAGAMENTO ___\n");
    printf("1 - A VISTA\n");
    printf("2 - CARTÃO DE DÉBITO\n");
    printf("3 - CARTÃO DE CRÉDITO\n");
    printf("4 - PIX\n");
    printf("\n Digite a opcão: ");
    scanf("%d", &formapagamento);

    switch (formapagamento)
    {
    case 1:
        valordesconto = (valortotal / 100) * 10;
        break;

    case 2:
        valordesconto = (valortotal / 100) * 5;
        break;
        
    case 3:
        valordesconto = (valortotal / 100) * 3;
        break;
        
    case 4:
        valordesconto = (valortotal / 100) * 7.5;
        break;

    default: printf("Forma de pagamento inválida");
        break;
    }

    valortotal = valortotal - valordesconto;

    printf("Preço final é de R$%.2f", valortotal);

    return 0;
}