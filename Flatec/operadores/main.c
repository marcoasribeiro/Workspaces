#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main()
{

    // &&  as duas  expresões verdadeiras
    //( TRUE) && (TRUE)


    int i =  40;
   // scanf("%i \n", &i);
    int condicao = !(i>20) && (i<100);


    printf("%i %i \n", condicao, i );
      printf("%i \n", !condicao );

    // ||
    // (TRUE) || ( FALSE)  Retorna 1    ok
    // (FALSE) || ( TRUE)   Retorna 1
    // (TRUE) || (TRUE)     Retorna 1
    // (FALSE) || ( FALSE)  Retorna 0

    system ("cls");

    int  x =  10;
    int cond = 0;

    cond = (x == 10) || ( x < 1);
    printf("%i", cond);

    cond = (x == 0) || ( x != 1000);
    printf("%i", cond);

     cond = (x == 10) || ( x != 0);
    printf("%i", cond);

     cond = (x != 10) || ( x == 0);
      printf("%i", cond);




    return 0;
}
