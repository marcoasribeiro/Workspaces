#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x , y;

    printf("Digite o valor de x\n");
    scanf("%d", &x);

    printf("Digite o valor de y\n");
    scanf("%d", &y);

    printf("O maior numero digitado foi ");
    if ( x > y){
        printf("%d", x);
    }else{
        printf("%d", y);
    }
    return 0;
}
