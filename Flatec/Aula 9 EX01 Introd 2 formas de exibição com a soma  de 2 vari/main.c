#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


/* Exercico 01 de Introdu��o de algoritimo e programa��o
// Crie um algoritimo  que apresente a soma dos valores 10 e 5. A mensagem a ser exibida  deve ser a seguinte foma : " A soma do valor .... mais ... � igual a.....".*/



int main()
{

    int a = 10,b = 5, c = a+b;
    printf(" \n Digite os valore de A e B");
    //scanf(" %i %i", &a , &b);


    printf(" \nA soma do valor %i mais %i � igual %i:", a , b , a+b);
    printf(" \n A soma do valor %i mais %i � igual %i:", a , b , c);




    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
