#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <string.h>
#include <conio.h>



int main()
{

    float salario;
    printf("Informe o valor do salario ");
    scanf("%f", &salario);

    if((salario > 0)  && (salario < 400))
    {
            printf(" \n  Salario com aumento de 15% e seu valor eh de: %.2f  ", salario*1.15);
    }
            else if((salario > 400.01)  && (salario < 700.00))
    {
            printf(" \n  Salario com aumento de 12% e seu valor eh de: %.2f  ", salario*1.12);
    }
            else   if((salario > 700.01)  && (salario < 1000.00))
    {
            printf(" \n  Salario com aumento de 10% e seu valor eh de: %.2f  ", salario*1.10);
    }
            else if((salario > 1000.01)  && (salario < 1800.00))
    {
            printf(" \n  Salario com aumento de 7% e seu valor eh de: %.2f  ", salario*1.07);
    }
            else if((salario > 1800.01)  && (salario < 2500.00))
    {
            printf(" \n  Salario com aumento de 4% e seu valor eh de: %.2f  ", salario*1.04);
    }
            else if(salario > 2500.00)
    {
            printf(" \n  Salario , nao havera aumento %.2f  ", salario);
    }

    getchar();
    return 0;
}

