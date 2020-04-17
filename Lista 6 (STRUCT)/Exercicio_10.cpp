#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct dados{
	char nome[30];
	int matricula;
	float media;	
};


int main(){
	setlocale(LC_ALL,"portuguese");
	
	dados aluno[10],*aprovados,*reprovados;
	int apr=0,rpr=0;
	
	for(int cont=0;cont<10;cont++){
		printf("ALUNO %d\n",cont+1);
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		gets(aluno[cont].nome);
		
		printf("Digite o número de matricula: ");
		scanf("%d",&aluno[cont].matricula);
		
		printf("Digite a media final do aluno: ");
		scanf("%f",&aluno[cont].media);
		
		if(aluno[cont].media<5){
			rpr++;
		}else{
			apr++;
		}
	}
	
	if(rpr!=0){
		reprovados = (dados*) malloc (sizeof(dados)*rpr);
	}

	if(apr!=0){
		aprovados = (dados*) malloc (sizeof(dados)*apr);
	}
	
	int i=0,j=0;
	for(int cont=0;cont<10;cont++){
		if(aluno[cont].media<5){
			reprovados[i] = aluno[cont];
			i++;
		}else{
			aprovados[j] = aluno[cont];
			j++;
		}
	}
	
	system("cls");
	printf("Reprovados:\n");
	for(int cont=0;cont<i;cont++){
		printf("Nome: %s\n",reprovados[cont].nome);
		printf("Matricula: %d",reprovados[cont].matricula);
		printf("\nMedia: %f\n\n",reprovados[cont].media);
	}
	printf("\n\n\nAprovados:\n");
	for(int cont=0;cont<j;cont++){
		printf("Nome: %s\n",aprovados[cont].nome);
		printf("Matricula: %d",aprovados[cont].matricula);
		printf("\nMedia: %f\n\n",aprovados[cont].media);
	}

	getchar();
	return 0;
}

