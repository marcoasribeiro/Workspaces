
#include <stdio.h>
int soma(int *v, int n) {
int s;
for(int i=0; i<n; i++){ //iteração
s = s + v[i];
}
return s;
}
int main(void) {
int vetor[] = {1, 2, 3, 4};
printf("A valor da soma é %d\n", soma(vetor, 4));
return 0;
}
