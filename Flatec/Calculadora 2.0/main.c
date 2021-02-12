#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1 , n2 , resultado;
    int op = 0;

    do {
        n1= n2 = resultado = 0;
        printf(" (1) somar \n");
        printf(" (2) subtrair \n");
        printf(" (3) multiplicar \n");
        printf(" (4) dividir \n");

        printf("informe a operacao \n");
        op = getchar();

        printf("Digite o primeiro numero \n\t");
        scanf("%f", &n1);
        printf("Digite o segundo  numero \n\t");
        scanf("%f", &n2);


    }while( op!='0');


    return 0;
}
