#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


int main()
{
    int a , b ;

    printf("Digite o primeiro numero ");
    scanf("%i", &a);
    printf("Digite o segundo  numero ");
    scanf("%i", &b);

    if (a > b)
    {
        printf("\n Primeiro numero digitador e maior");
    }
    else if(b > a)
    {
        printf(" \n Segundo numero e maior ");
    }
    else if( a == b)
    {
        printf(" Os numeros sao iguais");
    }



    return 0;
}
