#include <stdio.h>
#include <stdlib.h>

///Correto!!!

int main()
{
    ///Ex3
    int num1, num2, num3, somaN;

    printf("\n#################################");
    printf("\n# Soma de tres numeros inteiros #");
    printf("\n#################################\n\n");

    printf("Informe o primeiro numero: "); scanf("%d", &num1);
    printf("Informe o segundo numero: "); scanf("%d", &num2);
    printf("Informe o terceiro numero: "); scanf("%d", &num3);

    somaN = num1 + num2 + num3;

    printf("\nA soma dos numeros informados e: %d\n", somaN);

    return 0;
}
