#include <stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string>



int main()
{

    int Fla, Vas, Flu, Bot;
    printf("Digite a quantidade de likes na pagina de cada um dos times cariocas ");
    scanf("%f %f %f %f", &Fla, &Vas, &Flu, &Bot);

    if((Fla > Vas) || ( Fla > Flu) || (Fla > Bot))
    {
        printf("A Pagina do Flamendo tem mais Like que todos os grandes  Rivais Cariocas");
    }
    else
    {
        printf("Algumas das paginas de algum dos rivais  do flmaneto  tem mais likes que a pagina do Flamendo");
    }


  //  getchar();
    //printf("\n\n");
    //system("pause");
    return(0);
}
