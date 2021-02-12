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

    //int a = 210, b = 105;       // declaração de variavel na mesma  variavel
    int a = 210;
    int b = 200;
    //char a[] = " Dynamics";
    //char a='G'; // declaração de caratcterer  aspa tem que ser simples


    // se quiser mostrar o sinal de % digite duas vezes no printf
    // Tabulação   usar  \T  e uma tabulação como no word
    printf("int = %i %f %d %o %x %c ", a,a,a,a,a,a);

    /*printf(" valor da variável INT    é : %i\n", a);
    printf(" valor da variável Float  é : %.2f\n", a);     // O .2 apos % numero de casa apos a virgula
    printf(" valor da variável Double é : %d\n", a);
    printf(" valor da variável Hexa   é : %x\n", a);
    printf(" valor da variável Octa   é : %o\n", a);
    printf(" valor da variável Char   é : %c\n", a);
    printf(" valor da variável String é : %s\n", a);    // usar o função char com vetor
    */

    getchar();
    printf(" \n\n");
    system("pause");
    return (0);
}
