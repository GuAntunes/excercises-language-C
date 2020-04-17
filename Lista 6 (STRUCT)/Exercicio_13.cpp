#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct dados{
	char Nome[15];
	int ano, preco;
};


int main(){
	setlocale(LC_ALL,"portuguese");
	
	dados modelos[5];
	int p;
	
	for(int cont=0;cont<5;cont++){
		printf("Digite o nome do carro número %d: ",cont+1);
		fflush(stdin);
		scanf("%15[^\n]",modelos[cont].Nome);
		printf("Digite o ano do carro: ");
		scanf("%d",&modelos[cont].ano);
		printf("Digite o preço do carro: ");
		scanf("%d",&modelos[cont].preco);
		system("cls");
	}
	
	do{
		printf("Digite um valor de pesquisa: ");
		scanf("%d",&p);
		
		for(int cont=0;cont<5;cont++){
			if(modelos[cont].preco<p){
				printf("\nCarro: %s",modelos[cont].Nome);
				printf("\nAno: %d",modelos[cont].ano);
				printf("\nPreco: %d",modelos[cont].preco);
				printf("\n");
			}
		}
		system("pause");
		system("cls");
	}while(p!=0);


	getchar();
	return 0;
}

