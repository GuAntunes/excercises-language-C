#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


//Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

int main()
{
	setlocale(LC_ALL,"portuguese");
	char aux;
	int idade;
	
		printf("Digite a idade: ");
		scanf("%d",&idade);
		
		printf("Voc� j� viveu %d dias",idade*356);
		
	getch();
	return 0;
}

