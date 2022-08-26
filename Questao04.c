#include <stdio.h>
#include <math.h>
void calcula_hexagono(float l);
int main() {
 float l;
 
 printf("\nInsira um valor para os lados do hexagono: ");
 scanf("%f", &l);
 
 
 return 0;
}

void calcula_hexagono(float l){
	float a,p;
	
	a = (3*(pow(l,2))*(sqrt(3)))/2;
	p = 6*l;
	
	printf("\nArea: %f", a);
	printf("\nPerimetro: %f", p);
}
