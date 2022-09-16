#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{

    //Ex9
    printf("\n###############################");
    printf("\n# Converter Graus em Radianos #");
    printf("\n###############################\n\n");

    float G, R; // G = ângulo em graus ; R = radianos

    printf("Informe um angulo em graus: "); scanf("%f", &G);

    R = G * PI / 180;

    printf("\nO angulo em radianos é: %.2f\n\n", R);

    return 0;
}
