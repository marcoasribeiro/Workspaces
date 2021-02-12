#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese");   // tem problema ao trabalhar com scanf , porem se consegue normalizar os acentos  se digitar  : ex Você em string

    // exerc 3

    int a, b, c;
    a = b = c = 210;

    scanf("%i", &b);
    printf("b = %i", b);

    printf("\n Valor da variavel %i %i %i ", a , b ,c);



    //char l[] = "Você";
    //printf("Digite um caracter");
    //scanf(" %c, &l");
    //printf(" %s", &l);


    /* exercicio 02
    float  a;

    printf("Digite três numeros ");
    scanf(" %f", &a);
    printf("O valor digitado  foi %.3f", a);
    */


    /*  exercicio  01
    printf("Digite um numero ");
    scanf(" %i", &a);
    printf(" %i", a /2);

    printf("\n %i %i %i %i %i",a+2 ,a*3 ,a/5 ,a*50 ,a%3);               // O resto da divisão
    */

    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
