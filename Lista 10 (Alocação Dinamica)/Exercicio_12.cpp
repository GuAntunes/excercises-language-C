#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct dados{
	char nome[50];
	int codigo, quantidade;
	float preco;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qt, Mpreco=0, Mqt=0;
	dados *prod;
	
	do{
		printf("Digite a quantidade de produtos: ");
		scanf("%d",&qt);
	}while(qt<1);
	
	prod = (dados*) malloc (sizeof(dados)*qt);
	
	for(int cont=0;cont<qt;cont++){
		system("cls");
		printf("Digite o código do produto %d: ",cont+1);
		scanf("%d",&prod[cont].codigo);
		printf("Digite o nome do produto: ");
		fflush(stdin);
		scanf("%50[^\n]",prod[cont].nome);
		printf("Digite a quantidade: ");
		scanf("%d",&prod[cont].quantidade);
		printf("Digite o preço do produto: ");
		scanf("%f",&prod[cont].preco);
	}

	for(int cont=1;cont<qt;cont++){
		if(prod[cont].preco>prod[Mpreco].preco){
			Mpreco = cont;
		}
		if(prod[cont].quantidade>prod[Mqt].quantidade){
			Mqt = cont;
		}
	}
	
	system("cls");
	
	printf("Maior preço: \n");
	printf("Nome: %s\n",prod[Mpreco].nome);
	printf("Código: %d\n",prod[Mpreco].codigo);
	printf("Quantidade: %d\n",prod[Mpreco].quantidade);
	printf("Preço: %f\n\n",prod[Mpreco].preco);
	
	printf("Maior quantidade: \n");
	printf("Nome: %s\n",prod[Mqt].nome);
	printf("Código: %d\n",prod[Mqt].codigo);
	printf("Quantidade: %d\n",prod[Mqt].quantidade);
	printf("Preço: %f\n\n",prod[Mqt].preco);
	
	free(prod);
	getchar();
	return 0;
}

