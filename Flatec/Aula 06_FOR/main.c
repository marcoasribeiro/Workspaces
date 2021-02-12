#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main()
{

    int x, y=0, s=0;
    printf(" Digite valores para Somar! \n");

    for(x = 0;x < 10; x++)
    {
        printf("\n Digite um valor para somar");
        scanf("%i", &y);
        s=s+y;
    }

    printf(" \n A Soma geral da variavel  S = %i",s);

    /* exercicio
    int x,y;

    for( x = 0;x < 10; x++)
    {
        printf("\n");
        for( y = 1;y <= 5; y++)
        {
            printf("\n Elemento  testado  %i", y);
        }
        printf("\n Cinco elementos foram testados na etapa x %x", x);
        }




    /*  exercicio 1
    // indice e uma variavel , valor será descartado pelo for
    int x = 5;

    for(x = 0;x <= 10; x++)  // indice inicia na posição  zero(0)
    {
        printf("\n indice na posicao  %i", x);
    }
    */

    getchar();
    printf("\n\n");
    return 0;
}
