#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <conio.h>


// Faça um codigo que calculo e media final de um aluno que tem as notas  6,8 na p1 e na p2 5,5 e na p3 8,3
// calculando a media ponderada e  que o peso das notas é : 2,3,e 5

int main()
{
    setlocale(LC_ALL,"portuguese");
    float n1 = 6.8, n2 = 5.5, n3 = 8.3, r;
    r = ((n1 * 2)+(n2 *3)+(n3 * 5))/10;
    printf("\n O Média final  é :%1.2f", r);




    getchar();
    printf("\n\n");
    system("pause");
    return 0;
}
