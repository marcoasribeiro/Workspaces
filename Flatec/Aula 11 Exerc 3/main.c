#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor = 45.0000, kilo = 0.750;
    printf("\n O valor a ser pago pelo cliente eh de %.2f", valor * kilo);
    printf("\n O valor a ser pago pelo cliente eh de %5.2f",45.0000*0.750);
    printf("\n O valor a ser pago pelo cliente eh de %5.2f", valor *0.750);
    printf("\n O valor a ser pago pelo cliente eh de %5.2f",45*kilo);



    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
