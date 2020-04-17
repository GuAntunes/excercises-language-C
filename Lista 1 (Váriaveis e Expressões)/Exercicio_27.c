#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


//Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
//de sua idade e do ano atual.
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int ano_atual = 2015, idade, nascimento;
	
	printf("Digite a idade da pessoa: ");
	scanf("%d",&idade);
	
	printf("\nDigite o ano atual: ");
	scanf("%d",&ano_atual);
	
	nascimento = ano_atual - idade;
		
	printf("\n\nO ano de nascimento é: %d",nascimento);
	

	getch();
	return 0;
}


