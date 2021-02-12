#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>


int main()
{
    int i,n,s = 0;
    printf("Digite uma sequencia de 10 valores \n");

    for(i=0;i<10;i++)
    {
        printf("\n Valor: ");
        scanf("%i", &n);
        s=s+n;
    }

    printf("\n A soma dos dez valores eh: %i \n A media dos dez valores eh: %i",s,s/10);


    return 0;
}
