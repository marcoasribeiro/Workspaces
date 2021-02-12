#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()
{
    int a,b;
    printf("informe dois numeros\n");
    scanf("%i %i", &a , &b);


    if ( a % b == 0)
    {
        printf("\n A divisao de %i por %i eh exata!!", a, b);
    }
    else
    {
        printf("\n A divisao  de %i por %i NAO eh exatada",a,b);
    }


    return 0;
}
