#include <stdio.h>
#include <stdlib.h>

///Correto!!!

int main()
{
    ///Ex1
    printf("\n######################################");
    printf("\n# Retornando o antecessor e sucessor #");
    printf("\n######################################\n\n");

    int n;

    printf("Informe um numero: "); scanf("%d", &n);

    printf("Seu antecessor e: %d \n", n - 1);
    printf("Seu sucessor e: %d \n\n", n + 1);

    return 0;
}
