#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    //Ex11
    printf("\n#################################");
    printf("\n# Calcular a area de um circulo #");
    printf("\n#################################\n\n");

    float raioC,areaC;

    printf("Digite o raio do circulo: "); scanf("%f", &raioC);

    areaC = PI * (raioC * raioC);

    printf("\nA area do circulo e: %f", areaC);

    return 0;
}
