#include <stdio.h>
#include <stdlib.h>
void imp_ini(void) {
printf("impressao do cabecalho \n");
}
void imp_fim(void) {
printf(" fim do programa \n ");
}


int main()
{
    float n1 , n2, media;

    printf("Digite a  n1 \n");
    scanf("%f",&n1);
    printf("Digite a  n2 \n");
    scanf("%f",&n2);



    printf("Media = %d ",media);


    imp_ini();
    imp_fim();
    return 0;
}
