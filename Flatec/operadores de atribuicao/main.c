#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    //scanf("%i", &x);



    while( x < 10){
        printf("%i \n ", x*10);
          x += 1;
    }

    /*

        1) +=       soma
        2) -=       subtraç]ao
        3) *=       multiplicação
        4) /=       divisao
        5) %=       resto da divisao

        */

        int i = 50;
            printf("%i Soma \n", i += 100);
            printf("%i Subtracao \n", i -= 50);
            printf("%i multiplicacao \n", i *= 3);
            printf("%i  divisao  \n", i /= 3);
            printf("%i resto da divisao  \n", i %= 3);




    return 0;
}
