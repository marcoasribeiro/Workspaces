#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

// Faça um algoritmo que  receba dois valores, calcule e mostre o a div do primeiro pelo segundo
// mostre tb separadamente a parte  inteira e o resto da divisão

int main()
{
    setlocale(LC_ALL,"portuguese");

    int n1, n2, resto, resultado;  // variaveis

    printf("Digites os dois numero  para Divisão \n");    // mensagem ao user
    scanf("%i %i", &n1 , &n2);  // le  teclado

    resultado = n1 /n2;  // variavel  divisão resultado
    printf("%i" ,resultado); //

    resultado = n1/n2;  // variavel resultado
    resto = n1%n2;          // resto da dividsão   usar xxx%xxxx

    printf("\n Resultado é %i e o resto da divisão é:  %i ", resultado,resto);

    getchar();
    printf(" \n\n");
    system("pause");
    return 0;
}
