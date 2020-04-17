#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.*/

struct informacao {
	char nome[30];
	int idade;
	char endereco[50];
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct informacao aux;
	
	printf("Digite o nome da pessoa: ");
	scanf("%30[^\n]",aux.nome);
	
	printf("Digite a idade: ");
	scanf("%d",&aux.idade);
	
	fflush(stdin);
	
	printf("Digite o endereço: ");
	scanf("%50[^\n]",aux.endereco);
	
	system("cls");
	
	printf("Nome: %s\nIdade: %d\nEndereço: %s",aux.nome,aux.idade,aux.endereco);
	
	getch();
	return 0;
}

