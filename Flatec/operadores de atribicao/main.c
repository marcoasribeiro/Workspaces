#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    x = x + 1;

    while( x < 11){
        printf("%i \n", x);
        x = x + 1;
    }


    // operadores de atribuicao

    /*
     +=  soma
     -= subtra��o
     *= multiplica��o
     /= divids�o
     %= resta da divis�o

     */

    int i = 50;

    printf("%i  Soma: \n", i +=50);
    printf("%i  Subtracao: \n", i -=50);
    printf("%i  multiplicacao: \n", i *=3);
    printf("%i  divisao: \n", i /= 3);
    printf("%i  resto: \n", i %= 3);


    return 0;
}
