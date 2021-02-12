#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>




int main()
{

    setlocale(LC_ALL,"portuguese");

    int dia;
    printf("\n dom=1 seg=2 terça-3 quarta=4 quinta=5 setxa=6 sabado=7 não saber=0\t");
    printf("\n digite o dia da semana em que vai comecar as atividades");
    scanf(" %i", &dia);

    switch (dia)
    {
    case 0:
        printf("\n Se informe com o seu suprerior o dia do inicio  das atividades");
        break;

    case 1:
        printf("Voce  trabalha no domingo");

    case 2:

        printf("Voce  trabalha no segunda");

    case 3:

        printf("Voce  trabalha no terça");

    case 4:

        printf("Voce  trabalha no quarta");

    case 5:

        printf("Voce  trabalha no quinta");

    case 6:

        printf("Voce  trabalha no sexta");

    case 7:

        printf("Voce  trabalha no sabado");
     break;

    default:
         printf("\n Valor invalido  Digite o numero referente aos dias da semana ou zero caso não saba");
    break;


    }




    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
