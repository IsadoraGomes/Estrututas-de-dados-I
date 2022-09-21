#include<stdio.h>
#include<stdlib.h>

void bubblesort(int vet[], int tam);//fazendo a funçao existir

int main(){
int n; //criando variavel que armazena o tamanho do vetor	

printf("\nInsira o tamanho do vetor: "); //digitando o tamanho do vetor
scanf("%i", &n);//O computador está lendo um valor para o tamanho do vetor e o usuario(eu) estou inserindo

int i, vet[n]; //Criando vetor com o tamanho inserido pelo usuario

for(i=0; i < n; i++){ //laço que se repete enquanto a condição "i < n" for verdadeira
	printf("\nInsira o valor para o %i° elemento do vetor:", i+1); //Digitando o valor para cada posição do vetor
	scanf("%i", &vet[i]);//O computador está lendo o valor para cada posiçao do vetor e o usuario (eu) estou inserindo
	}

/*
printf("\nVetor antes da ordenacao:");//Informando que o vetor será mostrado antes de ser ordenado
	
for(i=0; i < n; i++){ //Laço de repetição para mostrar o valor em cada posição do vetor
	printf("%i", vet[i]); //Mostrando valor de cada posição do vetor
	}*/
bubblesort(vet, n); //Chamando a função

printf("\nVetor apos ordenacao; "); //Informando que o vetor será mostrado depois de ser ordenado

for(i=0; i < n; i++){ //Laço de repetição para mostrar o valor em cada posição do vetor
	printf("%i", vet[i]);//Mostrando valor de cada posição do vetor
	
}
printf("\n\n"); //pulando linha

}
void bubblesort(int vet[], int tam){ //criando a funçao bubble sort
	int i, j, aux; //declarando variaveis auxiliares
for(i=0; i < tam; i++){ //laço de repetiçao 

	for(j=0; j < tam; j++){ //enquanto j for menor que o tamanho do vetor o laço se repete(enquanto a condiçao for verdadeira o laço se repete)
		
		if(vet[j] > vet[j+1]){ //verifica se a condiçao e verdadeira ou falsa
			
	aux = vet[j];// auxiliar esta recebendo o valor do vetor na posiçao j
	vet[j] = vet[j+1];//o vetor na poisção j está recebendo o valor do vetor na posição j+1
	vet[j+1] = aux;//o vetor na posiçao j+1 recebe o valor guardado na auxiliar
	
		}
	}
}	
	
}	
