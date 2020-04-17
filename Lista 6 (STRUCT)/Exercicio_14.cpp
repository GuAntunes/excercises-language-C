#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string.h>
using namespace std;

typedef struct biblioteca{
	char titulo[30], autor[15];
	int ano;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	biblioteca livro[3];
	char pesquisa[30];
	
	for(int cont=0;cont<3;cont++){
		printf("Digite o titulo do livro %d: ",cont+1);
		fflush(stdin);
		gets(livro[cont].titulo);
		printf("Digite o nome do autor: ");
		fflush(stdin);
		gets(livro[cont].autor);
		printf("Digite o ano do livro: ");
		scanf("%d",&livro[cont].ano);
	}
	
	do{
		system("cls");
		printf("Digite o nome do livro que deseja procurar: ");
		gets(pesquisa);
		
		for(int cont=0;cont<3;cont++){
			if(strcmp(pesquisa,livro[cont].titulo)==0){
				printf("\nTitulo: %s",livro[cont].titulo);
				printf("\nAutor: %s",livro[cont].autor);
				printf("\nAno: %d\n",livro[cont].ano);
			}
		}		
		system("pause");
	}while(strcmp(pesquisa,"0")!=0);
	
	getchar();
	return 0;
}

