#include <stdio.h>

int main(void) {
 int a, b, c;
 int *p1;
 int *p2 = &a; //P2 recebe o valor no endere�o de a
 int *p3 = &c; //P3 recebe o valor no endere�o de c 
 p1 = p2; // p1 recebe o endere�o de p2
 *p2 = 10; // P2 recebe o valor 10 em seu endere�o
 b = 20; 
 int **pp;  //criando um ponteiro de ponteiro
 pp = &p1; //pp recebe o endere�o de p1
 
 printf("\n�%i ", **pp);
 
 *p3 = **pp; //p3 recebe o endere�o do ponteiro que o ponteiro de pp aponta, ou seja, endere�o de p1
 *p2 = b + (*p1) + 1; // 
 (*p3) * (*p1)
 
 printf("%d\t%d\t%d\n", a, b, c);
 return 0;
}
