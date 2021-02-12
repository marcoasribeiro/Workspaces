#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>


int main()
{
    // calcule e escreva a ausencia  na p1


    int  qtalunos , presentes, presenca , ausencia;
    printf(" informe a quantidade total de alunos, e a qtd presentes na p1 \n");
    scanf("%i %i", &qtalunos , &presentes);

    presenca = (qtalunos * presentes) /100;

    ausencia = qtalunos - presenca;

    printf("\n Ausencia %i", ausencia);
    printf("\n Presenca %i", presenca);



    return 0;
}
