#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fazer o cadastro de um produto.. logo após poder fazer o registro de quantos 
produtos há no estoque.. logo após fazer o controle de saída deste produto.*/

typedef struct produto{
	char nome[20] = "notebook";
	int quantidade = 0;
};
//----------------------------------------------------------------

int menu(){

	printf("----------------------------------------\n");
	printf("                  Menu                  \n");
	printf("----------------------------------------\n\n");
	printf("Escolha uma opção abaixo: \n");
	printf("\n[1]Entrada de produto");
	printf("\n[2]Saída de produto");
	printf("\n[3]Sair");
	int opcao;
	
	do{
		printf("\n\nOpção:");
		scanf("%d",&opcao);
	}while(opcao!= 1 && opcao != 2 && opcao!=3);
	
	return opcao;
}
//-------------------------------------------------------------------

void entrada(int *in){
	int valor;
	printf("Digite a quantidade de produtos que entrou: ");
	scanf("%d",&valor);
	*in = *in + valor;
}
//----------------------------------------------------------------------
void saida(int *out){
	int valor;
	printf("Digite a quantidade de produtos que saiu do estoque: ");
	scanf("%d",&valor);
	*out = *out - valor;
}
//------------------------------------------------------------------------

 	
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qt,op;
	produto prod;
	char resp[20];
	
	printf("--------------------------------------------------------------\n");
	printf("                     Quantidade Incial\n");
	printf("--------------------------------------------------------------\n");
	printf("Digite a quantidade inicial de notebooks: ");
	scanf("%d",&qt);
	prod.quantidade = qt;
	system("cls");
//--------------------------------------------------------------//

	do{
		system("cls");
		op = menu();
		system("cls");
		
		if (op == 1){
			entrada(&prod.quantidade);
		}else if (op == 2){
			saida(&prod.quantidade);
		}
		printf("\n\n%d",prod.quantidade);
	
	}while(op!=3);
	
	getchar();
	return 0;
}

