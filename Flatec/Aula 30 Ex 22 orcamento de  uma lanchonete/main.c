#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>



int main()
{
    float queijo = 0.50, presunto = 0.50, hamburguer = 0.100, queijo2 = queijo*2;
    float qts, qtq , qtp , qth;

    printf("informe a quantidade de sanduiches a ser feito ");
    scanf(" %f", &qts);


    qts, qtq = queijo2*qts;
    qtp = presunto*qts;
    qth= hamburguer*qts;

    printf("\n %f", qtq);
    printf("\n %f", qtp);
    printf("\n %f", qth);


    return 0;
}
