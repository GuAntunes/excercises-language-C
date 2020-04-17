#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char *vet;
	int tamanho;
	
	printf("Digite o tamanho da string: ");
	scanf("%d",&tamanho);
	
	vet = (char*) malloc (sizeof(char)*tamanho);

	printf("\n\nDigite o conteúdo da string: ");
	fflush(stdin);
	gets(vet);
	
	system("cls");
	
	for(int cont=0;vet[cont]!='\0';cont++){
		if(toupper(vet[cont])==65||toupper(vet[cont])==69||toupper(vet[cont])==73||toupper(vet[cont])==79||toupper(vet[cont])==85){
			continue;
		}
		printf("%c",vet[cont]);
	}

	free(vet);
	getchar();
	return 0;
}

