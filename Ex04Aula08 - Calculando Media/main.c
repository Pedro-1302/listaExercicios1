#include <stdio.h>
#include <stdlib.h>

///Correto!!!

int main()
{
    ///Ex4
    printf("\n####################");
    printf("\n# Calculo de Media #");
    printf("\n####################\n\n");

    float n1, n2, n3, n4, m;
    printf ("Digite o primeiro numero: "); scanf ("%f", &n1);
    printf ("Digite o segundo numero: "); scanf ("%f", &n2);
    printf ("Digite o teceiro numero: "); scanf ("%f", &n3);
    printf ("Digite o quarto numero: "); scanf ("%f", &n4);

    m = (n1 + n2 + n3 + n4)/4;

    printf("\nA media aritmetica dos numeros e: %.1f\n\n", m);

    return 0;
}
