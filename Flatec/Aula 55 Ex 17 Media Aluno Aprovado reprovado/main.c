#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    float nota;

    printf("Digite  media do aluno ");
    scanf("%f ", &nota);

    if(nota >= 9.0)
    {
        printf(" \n Conceito A ");
    }
    else if ((nota >= 7.5) && (nota <= 9.0))
    {
        printf(" \n Conceito B");
    }
    else if ((nota >= 6.0) && (nota <= 7.5))
    {
        printf(" \n Conceito C");
    }
    else if ((nota >= 4.0) && (nota <= 6.0))
    {
        printf(" \n Conceito D REPROVADO ");
    }
    else
    {
        printf(" \n Conceito E REPROVADO");
    }
        if((( nota >= 9.0)) || ((nota >= 7.5) && (nota<9.0)) ||   ((nota >= 6.0) && (nota< 7.5)))
           {
               printf(" APROVADO ");
           }
           else
           {
               printf(" APROVADO");
           }



    return 0;
}
