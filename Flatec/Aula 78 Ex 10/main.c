#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{
    int m ,n ,i , s = 0;
    printf("Digite o valor M menor N \n");
    scanf("%i %i", &m, &n);


    for(i=m;i <= n;i++)
    {
        printf(" \n Somando  %i", i);
        s= 0+i;
    }
    printf(" \n Resultado da soma %i", s);



    return 0;
}
