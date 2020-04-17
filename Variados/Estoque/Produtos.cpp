#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct produtos{
	char produto[20] = "Não definido";
	int quantidade = 0;
};

int menu(){
	int opcao;
	system("cls");
	do{
		printf("[1]Entrada de produtos ");
		printf("\n[2]Saída de produtos");
		printf("\n[3]Sair");
		printf("\n\nDigite a opção desejada: ");
		scanf("%d",&opcao);	
	}while(opcao!=1&&opcao!=2&&opcao!=3);
}

void exibe(produtos var[],int qtd){
	printf("Lista de produtos\n\n");
	for(int cont=0;cont<qtd;cont++){
		printf("[%d]Produto: %s",cont,var[cont].produto);
		printf("\n[%d]Quantidade: %d",cont,var[cont].quantidade);
		printf("\n\n");
	}
	getchar();
}

void entrada(produtos var[],int qtd){
	int indice, ent;
	do{
		printf("\nDigite o indíce do produto que deseja alterar: ");
		scanf("%d",&indice);
	}while(indice<0||indice>=qtd);
		printf("Produto: %s",var[indice].produto);
		printf("\nQuantidade: %d",var[indice].quantidade);
		printf("\n\n");
		printf("\nDigite o valor de entrada: ");
		scanf("%d",&ent);
		var[indice].quantidade = var[indice].quantidade + ent;
	system("pause");
}

void saida(produtos var[],int qtd){
	int indice, ent;
	do{
		printf("\nDigite o indíce do produto que deseja alterar: ");
		scanf("%d",&indice);
	}while(indice<0||indice>=qtd);
		printf("Produto: %s",var[indice].produto);
		printf("\nQuantidade: %d",var[indice].quantidade);
		printf("\n\n");
		printf("\nDigite o valor de entrada: ");
		scanf("%d",&ent);
		var[indice].quantidade = var[indice].quantidade - ent;
	system("pause");	
}



int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qt,valor;
	produtos *prod;
	
	do{
		printf("Digite quantos produtos deseja registrar: ");
		scanf("%d",&valor);
	}while(valor<1);
	prod = (produtos *) malloc (sizeof(produtos) * valor);
	system("cls");
	
	for(int cont = 0;cont<valor;cont++){
		printf("Produto %d\n",cont+1);
		printf("Nome: ");
		fflush(stdin);
		gets(prod[cont].produto);
		printf("Quantidade Inicial: ");
		scanf("%d",&prod[cont].quantidade);
		printf("\n");
	}
	system("cls");
	
	do{
		qt = menu();
		if (qt==1){
			exibe(prod,valor);
			getchar();
			entrada(prod,valor);
		}else if(qt==2){
			exibe(prod,valor);
			getchar();
			saida(prod,valor);
		}
	}while(qt!=3);
	
	system("cls");
	
	exibe(prod,valor);

	getchar();
	return 0;
}

