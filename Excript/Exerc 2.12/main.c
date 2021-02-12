#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void imp_ini(void){
    printf("Impressao do cabecalho \n");
}
 void imp_fim(void){

    printf("fim do programa \n");
    }

    int main(void)
    {
        int x;
        imp_ini();
        scanf("%d", & x);
        printf("dobro - %d\n",(2 * x))
;
    imp_fim();


        return 0;
    }
