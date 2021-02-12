#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<locale.h>


main()
{
    //setlocale('portuguese');

    int p, i;
    printf("Digite um numero par e outro impar");
    scanf("%i %i", &p, &i);
    if(p > i)
    {
        printf("Variavel par eh Maior que impar");
    }else if(p < i)
    {
        printf("Variavel impar eh Maior que par");
    }else
    {
        printf("O Valor Par e IMPAR Sao Iguais");
    }



    getchar();
    printf("\n\n");
    system("pause");
    return(0);
}
