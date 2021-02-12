#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char c;
    printf("Digite um caraccter em letra  minuscula");
    scanf("%c", &c);

    if(c >=  'a' )
    {
        printf(" A Letra digitada em Maiuscula : > %c <",
                 toupper (c) );
    }

    return 0;
}

