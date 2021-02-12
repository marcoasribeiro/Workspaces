#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    float p1 ,p2 ,p3 ,p4, m;

    printf("Digite a a nota da P1 \n");
    scanf("%f", &p1);
    printf("Digite a a nota da P2 \n");
    scanf("%f", &p2);
    printf("Digite a a nota da P3 \n");
    scanf("%f", &p3);
    printf("Digite a a nota da P4 \n");
    scanf("%f", &p4);

    m = (p1+p2+p3+p4) /4;

    if(m >= 7.0)
    {
        printf("Aprovado");
    }
    else if ((m >= 3.5) && (m < 7.0))
    {
        printf("Recuperacao");
    }
    else if(m < 3.5)
    {
        printf(" Reprovado");
    }




    return 0;
}
