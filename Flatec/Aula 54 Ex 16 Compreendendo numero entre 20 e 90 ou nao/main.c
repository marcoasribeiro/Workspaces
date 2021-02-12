#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>




 int main()
 {

    int a;

    printf("Digite o numero ");
    scanf(" %i",&a);

    if((a < 20)  || ( a > 90))
       {
           printf("O numero %i  esta entre 20 e 90 ", a);
       }
       else
        {
            printf("\n %i nao esta entre a faixa numeral ",a);
        }
        printf("%i",a);

    return 0;
}

