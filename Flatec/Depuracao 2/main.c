#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf(" Digite  um numero \n");
    char c;
    c = getchar();

    if( c == '1')
    {
        printf(" digitadoi correto  \n ");
    }else{
        printf("VAlor digitado errado \n ");
        printf("voce digitou >%c<", c);
    }



    return 0;
}
