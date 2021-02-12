#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

//

main()
{
	setlocale(LC_ALL,"portuguese");

	float a = 200;

    printf("valor e %i", a);
    printf("valor e %f", a);
    printf("valor e %d", a);
    printf("valor e %x", a);
    printf("valor e %o", a);
    printf("valor e %i", a);
    printf("valor e %s", a);

getchar();
printf("\n\n");
system("pause");
return(0);
}
