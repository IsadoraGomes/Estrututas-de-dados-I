#include <stdio.h>
#include <stdlib.h>
int main(void) {
int x, *p;
x = 100;
p = x;

printf("Valor de p = %p\tValor de *p = %d", p, *p);

}

/*a) Sim
b) No codigo está sendo usado aspas a esquerda dentro do printf, mas para sinalizar texto dentro da função utilizamos aspas a direita
c) Não
d) Sim, porém, ouve uma advertencia

*/
