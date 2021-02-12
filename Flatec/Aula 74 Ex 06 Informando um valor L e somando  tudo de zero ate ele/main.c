#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, l , s = 0;

    printf("Digite um numero  n \n");
    scanf("%i", &l);

    for(n =1; n <l ; n++)
    {
        printf("Somando > %i \n",n);
        s=s+n;
    }
    printf(" \nSoma Total = %i",s);





    return 0;
}
