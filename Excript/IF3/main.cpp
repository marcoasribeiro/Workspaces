#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<locale.h>


int main()
{
    //setlocale('portuguese');
    int Vas, Flu, Bot;
    printf("Digite a quantidade de titulos de cada um dos times no estadual\n");
    scanf("%i %i %i", &Vas, &Flu, &Bot);

    if((Vas > Flu ) && (Vas > Bot))
    {
        printf("\n O vasco tem mais Titulos que o Fluminense e o Botafogo");
    }
    else if((Flu > Flu) && (Flu > Bot))
    {
        printf("\nFluminense tem mais titulos que o Vasco e o Botafogo ");
    }
    else
    {
      printf("\nBotafogo etem mias titulos que o Vasco e o Flumiense");
    }



  //  getchar();
    //printf("\n\n");
    //system("pause");
    return(0);
}
