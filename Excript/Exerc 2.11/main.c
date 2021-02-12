#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main ()
    {
    double x , r ,p ;

    printf("Digite o valor de X\n");
    scanf("%lf", &x);
    r = sqrt( x );
    p = pow(x, 3);
    printf(" Raiz de %f = %f\n", x , r);
    printf("Cubo de %f = %f\n", x, p);


        return 0;
    }
