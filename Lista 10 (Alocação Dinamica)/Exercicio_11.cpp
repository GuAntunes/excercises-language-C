#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct dados{
	char nome[20], sobrenome[20];
	int nascimento;
};


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qt;
	dados *alunos;
	
	do{
		printf("Digite a quantidade de alunos: ");
		scanf("%d",&qt);
	}while(qt<1);

	alunos = (dados*) malloc (sizeof(dados)*qt);
	
	for(int cont=0;cont<qt;cont++){
		system("cls");
		printf("Digite o nome do aluno: ");
		scanf("%s",&alunos[cont].nome);
		printf("Digite o sobrenome do aluno: ");
		scanf("%s",&alunos[cont].sobrenome);
		printf("Digite o ano de nascimento do aluno: ");
		scanf("%d",&alunos[cont].nascimento);
	}
	
	system("cls");
	
	for(int cont=0;cont<qt;cont++){
		printf("Nome: %s\n",alunos[cont].nome);
		printf("Sobrenome: %s\n",alunos[cont].sobrenome);
		printf("Ano de nascimento: %d\n\n\n",alunos[cont].nascimento);
	}
	

	free(alunos);
	getchar();
	return 0;
}

