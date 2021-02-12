#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main()
{

    int v , f,n ;
    printf("Digite um numero N para ver seu fatorial \n");
    scanf("%i", &v);

    f = 1;
    n=v;

    while(n>0)
    {
        f=f*n;
        n--;
    }

        printf(" \n O Fatorial de %i eh %i", v, f);


    return 0;
}
