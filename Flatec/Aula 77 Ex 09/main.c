#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>


int main()
{
    int i;
    float p1 , p2, p3,media;
    printf("digite as notas do alunos  \n");


    for(i=1;i<25;i++)
    {
        printf(" \n Informe a nota dos alunos %i = \n",i);
        scanf("%f %f %f ", &p1 , &p2, &p3);
        media = (p1 +p2+ p3) / 3;
        if(media<7)
        {
            printf(" \n Aluno reprovado  - Media %.2f", media);
        }
        else
        {
        printf(" Aluno Aprovado  - Media %2.f", media);
        }
    }






    return 0;
}
