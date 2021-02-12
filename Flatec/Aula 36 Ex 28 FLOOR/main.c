#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    float v1 , a1 ,a2 ,a3 ,r1 ,r2;
    printf(" Informe o valor da conta ");
    scanf(" %f",&v1);

    a1 = v1/3;
    a2 = v1/3;
    a3 = v1/3;

    r1 = a1 - floor (a1);  // retorno somente o que esta apos ao ponto
    a1 = a1 -r1;

    r2 = a2 -floor (a2);
    a2 = a2 -r2;

    a3 = a3 + r1 +r2;


    printf(" \n conta amigo 1 = %.2f", a1);
    printf(" \n conta amigo 1 = %.2f", a2);
    printf(" \n conta amigo 1 = %.2f", a3);

    return 0;
}
