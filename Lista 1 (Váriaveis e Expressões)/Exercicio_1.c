#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*1. Fac�a um programa que leia um n�umero inteiro e o imprima, ent�ao leia um n�umero real e
tamb�em o imprima.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num;
	float numero;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);
	
	printf("\nDigite um n�mero Real: ");
	scanf("%f",&numero);
	
	system("cls");
	
	printf("N�mero inteiro: %d",num);
	printf("\nN�mero Real: %f",numero);
	
	

	system("pause");
	return 0;
}

