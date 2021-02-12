#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main()
{


    float a;

    printf("Digite o valor do Produto \n");
    scanf("%f",&a);

    if (a <= 20)
    {
        printf ("podera ser revendido com 45%% de lucro = %.2f",a*1.45);
    }
    else
    {
        printf ("podera ser revendido com 30%% de lucro = %.2f",a*1.30);
    }


    return 0;
}
