#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <math.h>

int main ()
{
    int x, y = 0, s = 0;
    printf("Digite valores para somar! \n");

    for(x = 0; x < 10; x++)
    {
        printf("Digite o valor para somar \n");
        scanf("%i", &y);
        s=s+y;
    }

    printf("\n A soma geral da variavel S = %i", s);



    getchar();
    printf("  \n\n ");
    system("pause");
    return(0);
}
