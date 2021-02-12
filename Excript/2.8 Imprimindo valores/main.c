#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x , y ;

    printf("Primeiro Valor Inteiro \n ");           //imprime na tela
    scanf("%d",  & x);                              // le o teclado

    printf("Segundo Valor  Inteiro");
    scanf("%d ", & y );
    printf(" Soma = %d ", x + y);


    return 0;
}
