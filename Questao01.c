#include<stdio.h>


int main(){
	
int x,y; 
int *p; 
y = 0; // O valor de y inicialmente ser� 0
p = &y; // p recebe o endere�o da variavel y

x = *p; // x recebe o valor do endere�o para que y aponta, ou seja, y
x = 4;  // x recebe o valor 4
(*p)++; // Incrementando o valor no endere�o para que p aponta; *p = 0 + 1	
--x; 	//decremento no valor de x = 4 - 1 = 3
(*p) = (*p) + x; // somando o valor de x com o valor presente no endere�o p; (*p) = 1 + 3
	
printf("\n%i\n", x); 
printf("\n%i\n", y);
printf("\n%i\n", *p);	
	
}

//O valor de x, y e p ser�o 3 4 e 4 consecutivamente
