#include <stdio.h>
#include <stdlib.h>

///Correto!!!

int main()
{
    ///Ex8
    printf("\n###################################");
    printf("\n# Converter Celsius em Fahrenheit #");
    printf("\n###################################\n\n");

    float F, tC;

    printf("Digite a temperatura em Celsius: "); scanf("%f", &tC);

    F = (9.0/5.0)*tC + 32.0;

    ///(9.0/5.0) = 1.8
    ///(9/5) =~ 1 (Joga a parte decimal fora)

    printf("\nO valor em Fahrenheit: %.2f\n\n", F);
    return 0;
}
