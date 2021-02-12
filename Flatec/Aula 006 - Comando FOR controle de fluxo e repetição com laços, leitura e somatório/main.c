#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");

    int x;y;s=0;
    printf("digite os  valores para somar");

   for (x = 0; x < 10; x++)
   {
       printf("digite um valor para somar");
       scanf(" %i", &y);
       s =s+y;
   }
    printf(" \n A soma geral da variavel S e igual %i", s);

    /*
    int x, y;

        for (x = 1; x <= 10; x++)
        {
        printf("\n");
        for (y = 1; y <= 5; y++)
        {
            printf("\n Elemneto %i testado",y);
        }
            printf(" \nCinco elemntos foram testadaos na etapada %x", x);
        }

    */
    /* EXERCICO 1
    float x;

    for (x = 0; x <= 10 ; x++ )
    {
     printf("\nIndice na posição %.3f", x);
    }

    */


    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
