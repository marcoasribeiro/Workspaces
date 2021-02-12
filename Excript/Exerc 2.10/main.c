#include <stdio.h>
#include <stdlib.h>

int main ()
{
 double a , b;

 printf("Digite o valor de a\n");
 scanf("%lf", &a);

 printf("Digite o valor de b\n");
 scanf("%lf", &b);

 printf("Equacao: %fx + %f = 0\n", a, b);
 if(a == 0.0){
    printf("Nao e raiz\n");
    }else{
    printf(" E raiz = %f \n", (-b / a));
    }



    return 0;
}
