#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,media;
    printf("Digite a nota da P1 \n");
    scanf("%f", &n1);

    printf("Digite a nota da P2 \n");
    scanf("%f", &n2);

    printf("Digite a nota da P3 \n");
    scanf("%f", &n3);

    printf("Digite a nota da P4 \n");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

   if(media >= 7)
    {
        printf("O Aluno esta aprovado ");
         printf(" A Media final foi %f \n", media);
    }else
    {
        printf("O Aluno foi reprovado");
        printf(" A Media final foi %f \n", media);

    }




    return 0;
}
