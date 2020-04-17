#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[30];
	
	printf("Digite um nome: ");
	scanf("%30[^\n]",nome);
	
	if(nome[0]=='a'||nome[0]=='A'){
		printf("\n\n %s",nome);
	}
	
	
	

	getch();
	return 0;
}

