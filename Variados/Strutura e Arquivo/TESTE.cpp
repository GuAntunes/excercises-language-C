#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string.h>
using namespace std;

typedef struct municipios{
	char nome[40];
	char estado[2];
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *arq;
	municipios *dados;
	dados = (municipios*) malloc (sizeof(municipios)*2);
	
	arq = fopen("arq.txt","r");
	char frase[100]="";
	int linhas=0;
	while(fgets(frase,100,arq)!=NULL){
		linhas++;
	}

	dados = (municipios*) realloc (dados,sizeof(municipios)*linhas);

	int contador=0;
	rewind(arq);
	while(fgets(frase,100,arq)!=NULL){
		for(int cont=0;cont<strlen(frase);cont++){
			if(frase[cont]=='('){
				dados[contador].nome[cont] = '\n';
				break;
			}
			dados[contador].nome[cont] = frase[cont];
		}
		contador++;
	}
	
	for(int cont=0;cont<linhas;cont++){
		printf("%s",dados[cont].nome);
	}
	
	free(dados);
	fclose(arq);
	getchar();
	return 0;
}

