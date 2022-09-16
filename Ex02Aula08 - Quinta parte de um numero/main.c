#include <stdio.h>
#include <stdlib.h>

///

int main()
{
    ///Ex2
    printf("\n#############################");
    printf("\n# Quinta parte de um numero #");
    printf("\n#############################\n\n");

    float nmb;

    printf("Informe um numero: "); scanf("%f", &nmb);

    printf("\nA quinta parte deste numero e: %.f\n", nmb / 5);

    ///{0.1, 0.2, 0.3, 0.4...} (Casa decimal a direita);

    return 0;
}
