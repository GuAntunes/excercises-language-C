#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

struct informacoes{
	int matricula;
	char nome[30];
	int codigo;
	float n1, n2,media;
};


int main()
{
	setlocale(LC_ALL,"portuguese");
	struct informacoes info[10];
	int cont;
	
	for(cont=0;cont=10;cont++){
		printf("\nDigite a matricula do aluno: ");
		scanf("%d",&info[cont].matricula);
		fflush(stdin);
		printf("\nDigite o nome do aluno: ");
		scanf("%30[^\n]",info[cont].nome);
		printf("\nDigite o código da matéria: ");
		scanf("%d",&info[cont].codigo);
		printf("\nDigite o valor da primeira prova: ");
		scanf("%f",&info[cont].n1);
		printf("\nDigite o valor da segunda prova: ");
		scanf("%f",&info[cont].n2);
		info[cont].media = ((info[cont].n2 *2)+info[cont].n1)/3;
	}
	
	system("cls");
	
	for(cont=0;cont<10;cont++){
		printf("Nome do aluno: %s\nMedia: %.2f\n\n",info[cont].nome,info[cont].media);
	}
	
	
	
	getch();
	return 0;
}

