#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//fac¸a um programa que leia um nome e imprima as 4 primeiras letras do nome.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[30];
	int cont;
	
	printf("Digite uma frase: ");
	scanf("%30[^\n]",nome);
	
	system("cls");
	
	for(cont=0;cont<4;cont++){
		printf("%c",nome[cont]);	
	}
	
	

	getch();
	return 0;
}

