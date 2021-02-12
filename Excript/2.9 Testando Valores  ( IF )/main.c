#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x, y ;                                      // variaveis

    printf("Digite o Primeiro numero ");            // imprime na tela
    scanf(" %d", & x);                                // le o teclado

    printf("Digite o segundo numero ");             // imprime na tela
    scanf("%d", & y);                               // le o teclado
    printf(" O maior numero digitado Foi ");        // imprime na tela

    if (x > y) {                                    // desviando os  valores com IF
            printf("%d", x);                           // imprime na tela
        } else {
        printf(" %d", y);

        }

    return 0;
}
