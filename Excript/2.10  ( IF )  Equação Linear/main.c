#include <stdio.h>
#include <stdlib.h>


int main()
{
    double a , b ;

    printf(" Digite o Primeiro numero \n");             // imprime na tela
    scanf(" %lf", & a);                                 // Le o teclado

    printf("Digite o segundo numero \n ");
    scanf(" %lf", & b);

    printf("Equacao : % fx + %f = 0\n", a, b);          // imprime equa��o
    if(a == 0.0 ) {                                        // testando os valores e desviando
        printf(" Nao existe raiz \n");                      // imprime se n�o existir raiz
        } else {                                               // se n�o
        printf("Raiz = %f \n", (-b /a));

        }
    return 0;
}
