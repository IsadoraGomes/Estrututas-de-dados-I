# Estrututas-de-dados-I

#include<stdio.h>

typedef struct Receita {
float bruto;
float liquido;
};

typedef struct funcionarios {
int rg;
int cpf;
char nome[50];
char setor[30];
char cargo[30];
float salario;
char dtc[15];
int jdt;
};


typedef struct empresa { //criando struct com o nome "empresa"
int cnpj;
char nome[50];
char localizacao[70];
int numero_de_funcionarios;
char cargos[20];
float valor;
Receita receita;


};
int main(){

}
