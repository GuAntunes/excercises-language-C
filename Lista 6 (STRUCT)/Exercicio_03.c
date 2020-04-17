#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Construa uma estrutura aluno com nome, n´umero de matr´ýcula e curso. Leia do usu´ ario
a informac¸ ˜ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na
tela.*/

struct informacoes{
	char nome[30];
	int matriula;
	char curso[30];
};


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct informacoes info[5];
	int cont;
	
	for(cont=0;cont<5;cont++){
		fflush(stdin);
		printf("\n[%d]Digite o nome do aluno: ",cont+1);
		scanf("%30[^\n]",info[cont].nome);
		
		fflush(stdin);
		printf("\n[%d]Digite o curso do aluno: ",cont+1);
		scanf("%30[^\n]",info[cont].curso);
		
		fflush(stdin);
		printf("\n[%d]Digite a matricula do aluno: ",cont+1);
		scanf("%d",&info[cont].matriula);	
	}
	
	system("cls");
	
	for(cont=0;cont<5;cont++){
		printf("[%d]Nome: %s\nCurso: %s\nNúmero de matricula: %d\n\n",cont+1,info[cont].nome,info[cont].curso,info[cont].matriula);
	}


	getch();
	return 0;
}

