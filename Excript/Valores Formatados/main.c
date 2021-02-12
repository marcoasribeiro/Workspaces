#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    imprimir

    integer  - %i ou %d
    float  -  / double %f
    char %c
    string  %s
    %u  modulo de um numero
    %p endereco de memoria
    %e ou %E notacao cientifica
    %% imprimi %

    */

    int  x;
    printf("Digite um numero \n");
    scanf("%i", &x);

    printf("%i \n", x);

    float ff = 4.12;
    printf("%f", ff);


    printf(" %i %f \n", x , ff);



    printf("\n");
    return 0;
}
