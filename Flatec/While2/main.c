#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int valDigitado = 0;

    printf("Informe a quantida de vezes que vc deseja que n�s repetimos a mesma instru��o \n ");
    scanf("%i", &valDigitado);

    while( x <= valDigitado){
        printf("%i \n", x *10);
        x =(x+1);
    }



    return 0;
}
