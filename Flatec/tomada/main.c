#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main()
{
    int i;

    printf(" Digite um numero != 5: \n");
    scanf("%i", &i);

    if( i != 5)
    {
        printf("VERDADEIRO");
    }else
    {
        printf("FALSE");
    }




  /*  printf("Digite o valor de I \n");
    scanf("%i", &i);

    printf("\n \t%i \n ", i !=1 );
    printf("\n \t%i \n ", !(i ==1 ) ); // exclamação e a negação da função
*/


    return 0;
}
