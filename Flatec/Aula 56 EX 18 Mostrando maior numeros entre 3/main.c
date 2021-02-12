#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>


int main()
{
    int a, b, c;

    printf("Digite o valor de A  \n");
    scanf(" %i ", &a);
    printf("Digite o valor de B  \n");
    scanf(" %i ", &b);
    printf("Digite o valor de C  \n");
    scanf(" %i ", &c);

    if((a > b) && (a > c))
    {
        printf(" \n Maior Valor eh o A %i", a);
    }
    else if((b > a) && (b > c))
    {
        printf(" \n Maior Valor eh o B %i", b);
    }
    else if((c > a) && (c > b))
    {
        printf(" \n Maior Valor eh o C %i", c);
    }
    else
    {
        printf(" \n Ah dois ou tres com valores iguais :  A = %i B = %i C = %i", a, b,c);
    }

    return 0;
}
