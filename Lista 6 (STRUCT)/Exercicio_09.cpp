#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct info{
	char nome[30],sexo,cargo[30];
	int idade,CPF,nascimento,setor,salario;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *file;
	info *dados;
	int n;
	
	printf("Digite quantos funcion�rios deseja cadastrar: ");
	scanf("%d",&n);
	
	dados = (info*) malloc (sizeof(info)*n);
	
	file = fopen("Exercicio_09.txt","w");
	
	for(int cont=0;cont<n;cont++){
		printf("Digite o nome do funcion�rio: ");
		fflush(stdin);
		gets(dados[cont].nome);
		
		do{
			printf("Digite o sexo do funcion�rio[M/F]: ");
			scanf("%c",&dados[cont].sexo);
			fflush(stdin);
		}while(dados[cont].sexo!='m'&&dados[cont].sexo!='f');
		
		printf("Digite o cargo do funcion�rio: ");
		fflush(stdin);
		gets(dados[cont].cargo);
		
		do{
			printf("Digite a idade do funcion�rio: ");
			scanf("%d",&dados[cont].idade);
		}while(dados[cont].idade<16);
		
		printf("Digite o CPF: ");
		scanf("%d",&dados[cont].CPF);
		
		printf("Digite o nascimento: ");
		scanf("%d",&dados[cont].nascimento);
		
		do{
			printf("Digite o setor que o funcion�rio trabalha: ");
			scanf("%d",&dados[cont].setor);
		}while(dados[cont].setor>99||dados[cont].setor<0);
		
		do{
			printf("Digite o sal�rio do funcion�rio: ");
			scanf("%d",&dados[cont].salario);
		}while(dados[cont].salario<788);	
	}

	for(int cont=0;cont<n;cont++){
		fprintf(file,"Funcion�rio %d:\n\n",cont+1);
		fprintf(file,"Nome: %s\n",dados[cont].nome);
		fprintf(file,"Sexo: %c\n",dados[cont].sexo);
		fprintf(file,"Cargo: %s\n",dados[cont].cargo);
		fprintf(file,"Idade: %d\n",dados[cont].idade);
		fprintf(file,"CPF: %d\n",dados[cont].CPF);
		fprintf(file,"Nascimento: %d\n",dados[cont].nascimento);
		fprintf(file,"Setor: %d\n",dados[cont].setor);
		fprintf(file,"Sal�rio: %d\n\n",dados[cont].salario);
	}

	getchar();
	return 0;
}

