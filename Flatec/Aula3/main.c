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
        //char a [] = "Dynamics";             // declaração de VALOR string usar aspas duplas e
        //char a = 'l';                           // declaração do CHAR Usar aspas simples ' ' e Vetor[]


        printf("int = %i %f %d %o %x %c", a, a, a, a, a, a );
        printf("\n int = %% %i %f %d %o %x %c", b, b, b, b, b, b );   // para printar  % percentual na tela digitas 2 vezes %

        printf(" \n INT\t%i %i", a, b);     // Para usar tabulação  usar o comando  \t conforme exemplo na linha

        /*
        printf("\n valor da Variavel INT    é : %i", a);
        printf("\n valor da Variavel float  é : %.3f", a);             // padrão 6 casa decimais depois da virgula  podemos configurar   printf("\n valor da Variavel float  é : %f", a); usando .x apos %
        printf("\n valor da Variavel double é : %d", a);
        printf("\n valor da Variavel hexa   é : %x", a);
        printf("\n valor da Variavel octal é  : %o", a);
        printf("\n valor da Variavel  char  é : %c", a);
        printf("\n valor da Variavel String é : %s", a);
        */


        getchar();
        printf("\n\n");
        system("pause");
        return 0;

}
