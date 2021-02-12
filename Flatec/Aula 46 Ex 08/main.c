#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>


int main()
{


    int a , b;

    printf("Digite a Primeira idade\n");
    scanf("%i", &a);

    printf("Digite a Segunda idade\n");
    scanf("%i", &b);

    if( a > b)
    {
        printf("A pessoa mais velha e a Primeira ");
    }
    else if( a < b)
    {
        printf("A pessoa mais  velha e a segunda");
    }else if (a == b)
    {
        printf(" Tem a mesma idade");
    }






    return 0;
}
