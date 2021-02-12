#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>



int main()
{


    int a , b , c, d , r, s;
    printf("digite valores para A, B , C \n");
    scanf("%i %i %i ", &a, &b, &c);

    r = a + b;
    s = b-c;
    d = (r + s) /2;

    printf ("%i", d);

    getchar();
    printf( "\n\n");
    system("pause");
    return 0;
}
