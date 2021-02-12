#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

int main()
{

        /* SINAIS
         || = sinal logico ou
         && = Sinal Logico e
         */

        setlocale(LC_ALL,"portuguese");
        /*
        float fla, vas , flu , bot;
        printf(" %f %f %f %f",&fla, &vas, &flu, &bot);

        if((fla > vas) || ( fla > flu));
        {
            printf("A pagina do Flamengo tem mais likes");
        }
        else
        {
            printf("alguma das paginas do Rivais do flamengo tem, mais lokes");
        }

*/
        /*
        printf("digite a quantidad de titulos de um dos times no carioca");
        scanf(" %i %i %i", &vas , &flu ,&bot);

        if((vas>flu) && (vas>bot))
        {
            printf(" \nVasco tem mais titulos que Fluminense e o botafogo");
        }
        else if((flu>vas) && (flu>bot))
            {
                printf("\nFluminese mais titulos que vasco e botafogo ");
            }
            else
            {
                printf("\n Botafogo tem mais  titulos que o vasco e fluminense!!");
            }
*/

      // exercicio 02
     int refeicao ,escovou;
     printf("Informe a quantidade de vezes que voce fez a refeicao hoje");
     scanf(" %i", &refeicao);
     printf("Informe a quantida de vezes que vc escovou os dentes hoje");
     scanf("%i", &escovou);

     if(escovou >= refeicao)
     {
         printf("Voce esta escovandop os dentes de forma correta");
     }else if(escovou<refeicao)
     {
         printf("Voce esta escovandop os dentes de forma incorreta");
     }
     else
     {
         printf("Valor invalido");
     }




    // bloco IF lendo dois  valores Exercicio 02

    int p , i;
    printf("Digite um numero par e  outro impar");
    scanf("%i %i", &p , &i);

    if(p > i)
    {
        printf(" Variavel Par eh Maior que impar");
    }else if(p < i )
    {
            printf("Variavel IMPAR  eh maior que  par!!");
    }else
    {
        printf(" O Valor de Par e Inpar sao Iguais");
    }




    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
