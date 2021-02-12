#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <math.h>

int main ()
{
   int dia;
   printf(" Dom=1\t SEG=2\t TER=3\t QUAR=4\t QUI=5\t SEX=6\t SAB=7\t NAO SABER =0 ");
   printf("Digite o dia da semana em qual voce vai comecar as atividades");
   scanf("%i", &dia);

   switch(dia)
   {
       case 0:
        printf("\n Se informe com o seu superior dia que vai comecar as atividade");
        break;

       case 1:
            printf(" \n Voce trabalho no domingo");

       case 2:
           printf("\n Voce trabalho na segunda");

       case 3:
            printf("\n Voce trabalho no terca");

       case 4:
            printf("\n Voce trabalho na quarta");

       case 5:
            printf("\n Voce trabalho na quinta");

       case 6:
            printf("\n Voce trabalho na sexta");

        case 7:
            printf("\n Voce trabalho no sabado");
            break;

        default:
            printf("VAlor invalido !! Digite um numero Referente aos dias da semana ou zero para caso nao saiba");
        break;


   }



    getchar();
    printf("  \n\n ");
    system("pause");
    return(0);
}
