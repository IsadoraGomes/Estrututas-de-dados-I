#include <stdio.h>
#include <stdlib.h>
int main(void) {
int x, *p;
x = 100;
p = x;

printf("Valor de p = %p\tValor de *p = %d", p, *p);

}

/*a) Sim
b) No codigo est� sendo usado aspas a esquerda dentro do printf, mas para sinalizar texto dentro da fun��o utilizamos aspas a direita
c) N�o
d) Sim, por�m, ouve uma advertencia

*/
