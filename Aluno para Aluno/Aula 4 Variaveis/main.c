#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main()
{

    setlocale(LC_ALL,"portuguese");

    int minhaidade, mae , pai , irmao;
    printf("digite a idade \n");
    scanf(" %i %i %i %i", &minhaidade , &mae , &pai , &irmao);

    printf("minha idade é: %i a idade da  %i %i %i", minhaidade,  mae, pai, irmao );


    getchar();
    return 0;
}
