#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>


int main()
{
    int i,v;
    printf("Digite uma sequencia de 10 valores \n");

    for(i=0;i<10;i++)
    {
        scanf("\n%i", &v);
        if(v<0)
        {
            printf(" \n %i - numero negativo \n",v);
        }
        else if (v>0)
        {
            printf("\n %i - Numero positivo \n", v);
        }
        else
        {
            printf(" \n %i - NUmero Zero \n",v);
        }
    }


    return 0;
}
