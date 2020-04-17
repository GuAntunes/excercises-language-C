#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[30];
	
	printf("===============JOKEN-PO============");
	do{
		printf("\n\nDigite seu nome: ");
		scanf("%30[^\n]",nome);
	}while(strcmp(nome,"")==0);
	printf("\n\nDigite quantas vezes deseja jogar: ");
	
	

	getch();
	return 0;
}

