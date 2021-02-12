#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


int main()
{
    float peso , engordar  , emagrecer;

    printf("Digite o peso da pessoa ");
    scanf("%f", &peso);

    engordar = (peso *1.15) + peso;
    emagrecer = (peso*0.80);




    printf("\nO   peso eh :  %.2f\n",peso);







    return 0;
}
