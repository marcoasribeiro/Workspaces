#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{

    int a , b;
    printf(" Informe dois numeros \n");
    scanf("%i %i ", &a , &b);

    if(a > b)
    {
        printf("\n %i %i ",a,b);
    }
    else if( b > a)
    {
        printf(" \n %i %i ", b ,a );
    }
    else
    {
        printf(" \n Os dois valores Sao iguais");
    }


    return 0;
}
