#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <locale.h>


/* comentario do codigo  // ou
*/
    int main()
    {
        //setlocale(LC_ALL,'portuguese');  // acenctuação na tela preta  com a biblioteca locale.h
       //char a [] = "dynamics";  // string aspas  tem que ser dupla
       //char d = 'T';
        int a = 210;
        float a = 55;



       //float b = 250.15;

        printf("%i %d %f %i %i %i " \n", a, a, a, a, a);
       // printf("%s \n", a);   // imprime a string
        //printf("%f \n", a);   // imprime  float
        //printf("%i \n", a); // imprime inteiro
        //printf("%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i  \n", a);
        //printf("%i \n", a);
        //printf("%i \n", a);
     //   printf("%c \n", d);

    getchar();                          //  limpar o que foi digitado no teclado
    printf("Ola mundo \n");                           // imprime na tela
    system("pause");                    //  pausa depois da execução
    return (0);                         //
    }
