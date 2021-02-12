#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>



int main()
{

    float p1, p2, p3 , mf;

    printf(" \n Digite a nota da P1 \n");
    scanf("%f", &p1);

    printf(" \n Digite a nota da P2 \n");
    scanf("%f", &p2);

    printf(" \n Digite a nota da P3 \n");
    scanf("%f", &p3);


    mf = ((p1*2) + (p2*3) + (p3*5)) /10;

    if( mf >= 6.99)
    {
        printf(" Aprovado media =%.2f ", mf);
    }
    else
    {
        printf("Reprovado media = %.2f ", mf);
    }



    return 0;
}
