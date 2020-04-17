#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Digite um nome, calcule e retorne quantas letras tem esse nome.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[30],aux = '0';
	int cont;
	
	printf("Digite um nome: ");
	scanf("%30[^\n]",nome);
	
	for(cont=0;aux!='\0';cont++){
		aux = nome[cont];
	}
	
	system("cls");
	
	printf("O nome contem %d letras",cont - 1);
	

	getch();
	return 0;
}

