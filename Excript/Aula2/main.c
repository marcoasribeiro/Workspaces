#include <stdio.h>
long fibonacci(long n) {
if(n == 0 || n == 1) //condição de parada
return n;
else
return fibonacci( n-1 ) + fibonacci( n-2 ); //chamadas recursivas
}
int main(void) {
long n;
n = 55;
printf("Finonacci de %ld é %ld\n", n, fibonacci(n));
return 0;
}
