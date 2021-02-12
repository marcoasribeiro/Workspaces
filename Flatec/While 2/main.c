#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int valDigitado = 0;

    scanf("%i", &valDigitado);
    printf("Informe a repeticao da instrucao \n");

    while(x < valDigitado){
        printf("%i \n", x *10);
        x = x + 1;
    }

    return 0;
}
