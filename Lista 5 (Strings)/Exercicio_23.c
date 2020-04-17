#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	char string[100];
	int i,j,limite,cont;
	
	printf("Digite a frase desejada: ");
	scanf("%100[^\n]",string);
	
	limite = strlen(string) - 1;
	
	do{
		printf("Digite um número para a variavel i: ");
		scanf("%d",&i);
	}while(i<0||i>limite);
	
	do{
		printf("Digite um número para a variavel j: ");
		scanf("%d",&j);
	}while(j<0||j>limite||j<=i);
	
	for(cont=i;cont<=j;cont++){
		printf("%c",string[cont]);
	}


	getch();
	return 0;
}

