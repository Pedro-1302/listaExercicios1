#include <stdio.h>
#include <stdlib.h>



int main()
{
    ///Ex5
    printf("\n###################################################");
    printf("\n# Ano de nascimento a partir da idade e ano atual #");
    printf("\n###################################################\n\n");

    int idade, ano_nascimento;

    printf("Informe sua idade: "); scanf("%d", &idade);

    ano_nascimento = 2022 - idade;

    printf("Voce nasceu em: %d \n\n", ano_nascimento);

    return 0;
}
