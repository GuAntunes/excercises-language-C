#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Crie um programa que l ˆe 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num[6],cont;	

	for(cont=0;cont<6;cont++){
		printf("\n[%d]Digite o número desejado: ",cont+1);
		scanf("%d",&num[cont]);
	}
	system("cls");
	for(cont=0;cont<6;cont++){
		printf("\n%d",num[cont]);		
	}
	
	
	getch();
	return 0;
}

