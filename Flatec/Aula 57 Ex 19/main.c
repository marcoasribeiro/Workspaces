#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    int a,b,c,d;
    printf("Informe quatro numeros apertando enter : \n ");
    scanf("%i %i %i %i",&a,&b,&c,&d);

    if((a%2 == 0) && (b%2 == 0)  && (c%2 == 0 ) && ( d%2 == 0))
    {
        printf(" Existem  quatro numeros pares e zero impares");
    }
    else if((a%2 != 0) && (b%2 != 0)  && (c%2 != 0 ) && ( d%2 != 0))
    {
        printf(" Existem  quatro numeros impares e zero pares");
    }
    else if
        (((a%2 == 0) && (b%2 == 0)  && (c%2 == 0 ) && ( d%2 == 0)) ||
        ((a%2 == 0) && (b%2 == 0)  && (c%2 == 0 ) && ( d%2 == 0))  ||
        ((a%2 == 0) && (b%2 == 0)  && (c%2 == 0 ) && ( d%2 == 0))  ||
        ((a%2 == 0) && (b%2 == 0)  && (c%2 == 0 ) && ( d%2 == 0)))
    {
        printf(" Existem  quatro numeros pares e zero impares");
    }

    return 0;
}
