#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>


int main()
{


    setlocale(LC_ALL,"portuguese");

    //int a = 210, b = 105;       // declara��o de variavel na mesma  variavel
    int a = 210;
    int b = 200;
    //char a[] = " Dynamics";
    //char a='G'; // declara��o de caratcterer  aspa tem que ser simples


    // se quiser mostrar o sinal de % digite duas vezes no printf
    // Tabula��o   usar  \T  e uma tabula��o como no word
    printf("int = %i %f %d %o %x %c ", a,a,a,a,a,a);

    /*printf(" valor da vari�vel INT    � : %i\n", a);
    printf(" valor da vari�vel Float  � : %.2f\n", a);     // O .2 apos % numero de casa apos a virgula
    printf(" valor da vari�vel Double � : %d\n", a);
    printf(" valor da vari�vel Hexa   � : %x\n", a);
    printf(" valor da vari�vel Octa   � : %o\n", a);
    printf(" valor da vari�vel Char   � : %c\n", a);
    printf(" valor da vari�vel String � : %s\n", a);    // usar o fun��o char com vetor
    */

    getchar();
    printf(" \n\n");
    system("pause");
    return (0);
}
