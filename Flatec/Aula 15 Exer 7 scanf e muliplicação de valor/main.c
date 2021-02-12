#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>


// Faça i, açgortimo que receba 3 numeros ,calcule  e mostre a multiplicação

int main()
{

  setlocale(LC_ALL,"portuguese");

    int  a, b , c, r;   // Variaveis


    printf(" \nDigite os Tres  Numeros  para Multiplicacar \n ");
    scanf("%i %i %i", &a, &b, &c);          // coleta os nuemros digitados

    r = a*b*c;  //  multiplica os numeros

    printf("\n O resultado eh: %i", r);     // imprime o resultado


    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
