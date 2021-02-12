#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main()
{
    char c;
    printf("Digite um caracter em letra minuscula \n");
    scanf("%c", &c);

    if ( c >= 'a')
    {
        printf("Segue a letra que  voce digitou em maiscula : > %c < \n", toupper ( c ));
    }else
    {
        printf(" A letra e menor doq ue a Letra a");
    }

     return 0;
}
