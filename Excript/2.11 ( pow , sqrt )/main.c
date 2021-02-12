#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double x , r , p;
    printf(" Digite  a Raiz  e o cubo \n");
    scanf(" %lf " , & x);
    r = sqrt (x);                                           // raiz quadrada
    p = pow (x , 3);                                        // cubo
    printf("Raiz de %f = %f \n ", x ,r);                    // imprime a raiz
    printf(" Cubo de  %f = %f \n", x , p);                  // imprime o cubo

    return 0;
}
