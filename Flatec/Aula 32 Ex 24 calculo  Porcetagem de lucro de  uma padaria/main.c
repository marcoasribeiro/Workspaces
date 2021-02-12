#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>


int main()
{

    float pao = 0.12, broa = 1.50, qtdpao , qtdbroa ,p, b, r,t;

    printf("Digite a quantidade de pao\n");
    scanf("%f", &qtdpao);

    printf("Digite a quantidade de broa \n");
    scanf("%f", &qtdbroa);

    p = qtdpao * pao;
    b = qtdbroa *broa;
    r = (p+b)*0.10;
    t = p+b;

    printf("Os dados sao :\npao %.2f\nbroa %.2f\n %%%.2f\nTotal %.2f\n ", p, b, r, t);

   // getchar();
    return 0;
}
