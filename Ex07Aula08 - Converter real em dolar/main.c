#include <stdio.h>
#include <stdlib.h>

///Correto!!!

int main()
{
    ///Ex7
    printf("\n###########################");
    printf("\n# Converter real em dolar #");
    printf("\n###########################\n\n");

    float valor, cotacao, vlr_dolar;

    printf("Informe um valor em reais (R$): "); scanf("%f", &valor);
    printf("Informe a cotacao do dolar ($): "); scanf("%f", &cotacao);

    vlr_dolar = valor / cotacao;

    printf("\nO valor em dolar e: $%.2f\n\n", vlr_dolar);

    return 0;
}
