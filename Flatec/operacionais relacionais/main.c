#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ijovem , iidosa , idade;
    ijovem = 17;
    iidosa = 60;
    idade = 0;

    printf("digite a idade de uma pessoa \n");
    scanf("%i", &idade);

    if(idade <= ijovem)
    {
        printf("A idade informada e de um JOvem \n");
    }else if(idade >= iidosa)
    {
        printf(" A idade informada e de uma idosa");
    }else{
        if ((idade > ijovem) && (idade < ijovem)) // meia idade -60 e  + 17
        {
            printf("A idade informada e de uma pessoa de meia idade \n");
        }

    }





    return 0;
}
