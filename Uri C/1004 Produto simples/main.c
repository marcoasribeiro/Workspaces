#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float n1 , n2;
    int prod;

    printf("Digite o valor de n1 \n");
    scanf("%f", &n1);
    printf("Digite o valor de n2 \n");
    scanf("%f", &n2);

    prod = n1 *n2;

    printf("Produto = %i", prod);


    return 0;
}
