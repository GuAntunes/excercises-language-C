#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que leia a idade e o primeiro nome de v´arias pessoas. 
Seu programadeveterminarquandoumaidadenegativafordigitada. Aoterminar, seuprograma 
deve escrever o nome e a idade das pessoas mais jovens e mais velhas. */

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int idade,idadeJ=0,idadeV=0;
	char nome[50], jovem[50], velha[50],cont=0;
	
	do{
		fflush(stdin);
		printf("Digite o nome da pessoa: ");
		scanf("%50[^\n]",nome);
		
		printf("Digite a idade da pessoa: ");
		scanf("%d",&idade);
		
		if(cont==0&&idade>0){
			strcpy(jovem,nome);
			idadeJ = idade;
			strcpy(velha,nome);
			idadeV = idade;
			cont=1;
		}
		if(idade<idadeJ&&idade>0){
			strcpy(jovem,nome);
			idadeJ = idade;
		}
		
		if(idade>idadeV&&idade>0){
			strcpy(velha,nome);
			idadeV = idade;
		}
		
	}while(idade>0);
	
	printf("\n\nMaior Idade: \n");
	printf("Nome: %s",velha);
	printf("\nIdade: %d",idadeV);
	
	printf("\n\nMenor Idade: \n");
	printf("Nome: %s",jovem);
	printf("\nIdade: %d",idadeJ);

	getch();
	return 0;
}

