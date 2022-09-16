#include <stdio.h>
#include <stdlib.h>

///Correto!!!

int main()
{
    ///Ex6
    printf("\n#########################");
    printf("\n# Converter km/h em m/s #");
    printf("\n#########################\n\n");

    float K, M;

    printf("Digite um valor a ser convertido: "); scanf("%f", &K);

    M = K / 3.6;

    printf("\nO valor convertido e: %.2fm/s\n\n", M);

    return 0;
}
