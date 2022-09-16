#include <stdio.h>
#include <stdlib.h>

///Correto?

int main()
{
    ///Ex10
    printf("\n###################################");
    printf("\n# O premio de R$780.000,00 sera   #");
    printf("\n# dividido entre 3 pessoas, onde  #");
    printf("\n# Pessoa 1 ficara com 46por cento #");
    printf("\n# Pessoa 2 ficara com 32por cento #");
    printf("\n# Pessoa 3 ficara com o restante  #");
    printf("\n###################################\n\n");

    float vlr_premio = 780000.00;
    float i, ii, iii;

    i = vlr_premio * 46/100;
    printf("O ganhador 1 ficara com: R$%.2f\n", i);

    ii = vlr_premio * 32/100;
    printf("O ganhador 2 ficara com: R$%.2f\n", ii);

    iii = vlr_premio - (i + ii);
    printf("O ganhador 3 ficara com: R$%.2f\n", iii);

    return 0;
}
