#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main()
{

   char s;
   float a;

   printf("\n Informe seu sexo M ou F");
   scanf(" %c", &s);
   printf("\n Informe sua altura como exemple >> 0.00<< :");
   scanf("%f", &a);


   if(s == 'm')
   {
       printf("O seu peso ideal eh : %.3f", (a*72.7) -58 );
   }
   else if (s == 'f')
   {
       printf(" O seu peso ideal eh feminino : %.3f", (a*62.1)-44.7);
   }
   else
   {
       printf("\n Letra invalida, informe M= Masculino  ou F = Feminino");
   }
    return 0;
}
