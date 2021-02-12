#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>

main()
{
    int x, y;
    for(x = 0; x < 10; x++)
    {
        printf("\n ");
        for(y  = 0;y < 5; y++)
        {
            printf("\nElemento %i Testado", y);
        }
        printf(" \n Cinco elementos  foram testado na etapa %x", x);
    }

    getchar();
    printf(" \n\n");
    system("pause");
    return(0);
}
