#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


int main()
{

    int a;
    printf("Digite um numero\n ");
    scanf("%i", &a);

    if(a == 0)
    {
        printf("\n O numero e zero");
    }
    else if((a % 2)== 0)
    {
        printf(" \n O numero e Par \n");
    }
    else
    {
        printf(" \n O numero e impar\n");
    }


    return 0;
}
