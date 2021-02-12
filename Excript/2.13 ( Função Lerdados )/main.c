#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{
    int x;
    void lerdados (void) {
    printf(" Digite um valor inteiro : \n ");
    scanf("%d ", & x);
    }
    void impdados (void) {

    lerdados ();
    impdados ();
    printf(" Fim do programa \n ");
    }

    return 0;
}

