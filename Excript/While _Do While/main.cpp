#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <math.h>

int main ()
{
    int palito;
    printf(" Digite a quantidade de palitos\n");
    scanf("%d", &palito);


    while(palito <= 20)
    {
        printf("\n Foqueira  pode ser acesa com o palito %d", palito);
        palito++;
    }
    do
    {
        printf("\n Foqueira  pode ser acesa com o palito %d", palito);
    palito++;
    }while(palito<=20);
    printf("\n A caixa de fosforo continha %d palitos, rtesta um ",palito);


    getchar();
    printf("  \n\n ");
    system("pause");
    return(0);
}
