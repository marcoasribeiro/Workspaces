#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main()
{
    int idade;

    printf("\n Digite a idade do Atleta \n");
    scanf("%i", &idade);

    if((idade >= 5) && (idade <= 10))
    {
        printf(" \n A categoria para idade  %i eh  INFANTIL", idade);
    }
    else if((idade >= 11) && (idade <= 17))
    {
        printf(" \n A categoria par idade  %i eh  JUVENIL", idade);
    }
     else if(idade >= 17)
    {
        printf(" \n A categoria par idade  %i eh  ADULTA", idade);

return 0;

}
}
