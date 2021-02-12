#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <locale.h>




// EXerc 5 Calculando a area



int main()
{

    setlocale(LC_ALL,"portuguese");

    int a, e = 2;   // a = Area, e = Expoente
    float pi = 3.14159, r;      // Variavel da area - Variavel  com valor de expoente
    printf("Digite o Raio\n");
    scanf("%f", &r);

    a = pow(r,e);    // elevaчуo ao quadrado ^2     // Modo de se realizar a elevação de uma valor por outra com auxilio da bb math.h
    printf("O valor da circufenrencia щ %5.2f Cm", a*pi );  // Mostrando o resultado real de toda area da  circunferencia




    getchar();
    printf(" \n\n");
    system("pause");
    return 0;
}
