#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{

    int  dia ;
    printf(" seg=2\t,ter=3\t,qua=4\t,quin=5\t,sex=6\t,sab=7\t,dom=1\t,nao saber=0");
    printf("\n Digite o dia da semana que vai iniciar ");
    scanf("%i ", &dia );


    switch(dia)
    {
        case 0:
            printf("\n Se informe  o dia de inicio das atividades na semana!!");
            break;

        case 1:
            printf("\nVoce trabalha no domingo");

            case 2:
            printf("\nVoce trabalha no Segunda");

            case 3:
            printf("\nVoce trabalha no Terca");

            case 4:
            printf("\nVoce trabalha no Quarta");

            case 5:
            printf("\nVoce trabalha no Quinta");

            case 6:
            printf("\nVoce trabalha no sexta");

            case 7:
            printf("\nVoce trabalha no sabado");
            break;

            default:
                printf(" \n valor invalido  digite um numero referente aos dias da semana ");
                break;
    }




    getchar();
    printf(" \n\n");
    system("pause");
    return 0;
}
