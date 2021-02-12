#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<locale.h>


int main()
{
    //setlocale('portuguese');

    int refeicao , escovou ;
    printf("Digite a qunatidade de Vezes que voce comeu hoje\n");
    scanf("%i ", &refeicao);
    printf("Quantas vezes voce escovou o dente hoje\n");
    scanf("%i", &escovou);

    if(escovou > = refeicao)

    {
        printf("Voce esta escovando  os dentes de forma correta");
    }
    else if(escovou < refeicao)
        printf("Voce esta escovando de forma errada");
    }else
    {
        printf("O valor digitado  nao e valido");
    }



    getchar();
    printf("\n\n");
    system("pause");
    return(0);
}
