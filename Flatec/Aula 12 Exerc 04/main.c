#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

// fazer um codigo que informe a media aritimetica dos num 10,20,30,40.

    //setlocale(LC_ALL,"portuguese");


int main()
{

    int a = 10,b = 20,c = 30, d  = 40, e = (a+b+c+d)/4;
    printf(" O valor da media  aritimentica é : %i %i %i %i %i ", a , b , c , d, e);
    printf("\n O valor da media  aritimentica é : %i  ", e);

    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
