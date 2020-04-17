#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

struct informacoes{
	char nome[30];
	int matricula;
	float n1;
	float n2;
	float n3;
	float media;
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	struct informacoes info[5];
	int cont,n1,maior,menor;
	float MaiorN1=0,MaiorMedia=0,MenorMedia=100;
	
	for(cont=0;cont<5;cont++){
		fflush(stdin);
		printf("\n[%d]Digite o nome do aluno: ",cont+1);
		scanf("%30[^\n]",info[cont].nome);
		
		printf("\nDigite o número de matricula: ");
		scanf("%d",&info[cont].matricula);
		
		printf("\nDigite o nota da primeira prova: ");
		scanf("%f",&info[cont].n1);
		
		printf("\nDigite o nota da segunda prova: ");
		scanf("%f",&info[cont].n2);
		
		printf("\nDigite o nota da terceira prova: ");
		scanf("%f",&info[cont].n3);
		
		info[cont].media = (info[cont].n1+info[cont].n2+info[cont].n3)/3;
	}	
	
	
	for(cont=0;cont<5;cont++){
		if(MaiorN1<info[cont].n1){
			MaiorN1 = info[cont].n1;
			n1 = cont;
		}
		if(MaiorMedia<info[cont].media){
			MaiorMedia = info[cont].media;
			maior = cont;
		}
		
		if(MenorMedia>info[cont].media){
			MenorMedia = info[cont].media;
			menor = cont;
		}
	}
	
	system("cls");
	
	for(cont=0;cont<5;cont++){
		printf("[%d]Nome do aluno: %s\nNúmero de matricula: %d\nN1: %.2f\nN2: %.2f\nN3: %.2f\nMedia Geral: %.2f",cont+1,info[cont].nome,info[cont].matricula,info[cont].n1,info[cont].n2,info[cont].n3,info[cont].media);
		if(info[cont].media>=6){
			printf("\nO aluno esta aprovado!\n\n");
		}else{
			printf("\nO aluno esta reprovado!\n\n");
		}
	}
	
	printf("\n\nO aluno %s tirou a maior nota na N1: %.2f",info[n1].nome,info[n1].n1);
	printf("\nO aluno %s tirou a maior nota na Media Geral: %.2f",info[maior].nome,info[maior].media);
	printf("\nO aluno %s tirou a menor nota na Media Geral: %.2f",info[menor].nome,info[menor].media);
	
	

	getch();
	return 0;
}

