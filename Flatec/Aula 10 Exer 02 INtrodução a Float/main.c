#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


//exercicio 2  introdução ao float
// Escreva um codigo  qye imprima a multiplicação  dos numeros 2,541 e
//9,673. Os numeros e o resultado  devem ser apresentados em 10 espaços
// com apenas 2 casas decimais cada


int main()
{
    float a = 2.541,b = 9.673, c = a*b;

    printf("\n O valor  %8.2f multiplicando com o valor de  %8.2f eh %8.2f", a, b, a*b);
    printf("\n O valor  %8.2f multiplicando com o valor de  %8.2f eh %8.2f", a, b, c);


    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
