#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main()
{

    int x,y;
            setlocale(LC_ALL, "portuguese");
    for(x= 0; x < 10; x++)
    {

         printf("\n");
        for(y = 0;y < 10 ; y++)
    {

    printf(" \nElemento %i testado", y);
    }
    printf(" \nCinco elementos foram testados na etapa %x" , x);

    }


    getchar();
    printf("\n\n");
   // system("pause"):
    return(0);




}
