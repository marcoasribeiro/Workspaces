#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a , r;

    printf("digite um numero : \n");
    scanf("%i" , &a);

    if (a > 0)
    {
        printf("A metade  de %i eh %i \n ",a, a/2);
    }
    else if( a < 0)
    {
        printf("O quadrado   de %i eh %i \n ",a,r=-( a*a));
    }
    else
    {
        printf("numero eh  nulo %i \n ",a);
    }
    return 0;
}
