#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    int a;

    printf("digite um numero\n ");
    scanf(" %i ", &a);


    if(a > 0)
    {
        printf(" \n O numero e positivo  %i ", a);
    }
    else if( a < 0)
    {
        printf(" \n O numero e negativo %i ", a);
    }
    else
    {
        printf(" \n O numero eh zero");
    }



    return 0;
}
