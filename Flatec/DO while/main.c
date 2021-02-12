#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*
        faça
        {

        }
        enquanto ( true );
        */
        int contador = 0;
        char c;

        do
        {
            contador += 1;
            printf("Digite zero para sair do looping \n");
            printf("%i ", contador);
            c = getchar();


        }while( c != '0');

    return 0;
}
