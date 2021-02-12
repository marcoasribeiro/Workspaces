#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


int main()
{

    float normal  = 60.00, extra = 75.00,  qtn , qte , sl, sb;

    printf(" Informe quantas horas  normais trabalhadas");
    scanf(" %f", qtn);
    printf(" Informe quantas horas  extras trabalhadas");
    scanf(" %f", qte);


    qtn = qtn*normal;
    qte = qte *extra;


    sb = qtn+qte;
    sl = sb*0.90;


    printf("O salario liquido eh %.2f\n", sl);






    return 0;
}
