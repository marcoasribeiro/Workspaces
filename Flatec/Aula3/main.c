#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

//


main ()
{

        setlocale(LC_ALL, "portuguese");

        //float   a = 200.15;
        int  a = 210, b = 105;
        //int = a, b = 300;
        //char a [] = "Dynamics";             // declara��o de VALOR string usar aspas duplas e
        //char a = 'l';                           // declara��o do CHAR Usar aspas simples ' ' e Vetor[]


        printf("int = %i %f %d %o %x %c", a, a, a, a, a, a );
        printf("\n int = %% %i %f %d %o %x %c", b, b, b, b, b, b );   // para printar  % percentual na tela digitas 2 vezes %

        printf(" \n INT\t%i %i", a, b);     // Para usar tabula��o  usar o comando  \t conforme exemplo na linha

        /*
        printf("\n valor da Variavel INT    � : %i", a);
        printf("\n valor da Variavel float  � : %.3f", a);             // padr�o 6 casa decimais depois da virgula  podemos configurar   printf("\n valor da Variavel float  � : %f", a); usando .x apos %
        printf("\n valor da Variavel double � : %d", a);
        printf("\n valor da Variavel hexa   � : %x", a);
        printf("\n valor da Variavel octal �  : %o", a);
        printf("\n valor da Variavel  char  � : %c", a);
        printf("\n valor da Variavel String � : %s", a);
        */


        getchar();
        printf("\n\n");
        system("pause");
        return 0;

}
