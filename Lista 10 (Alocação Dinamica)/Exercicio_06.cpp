#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vet, tamanho,escolha,pos;
	char sair;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	
	vet = (int*) calloc (tamanho,sizeof(int));
	
	do{
		system("cls");
		do{
			printf("[1]Consultar || [2]Inserir: ");
			scanf("%d",&escolha);
		}while(escolha!=1&&escolha!=2);
		
		do{
			printf("Digite a posição da memória: ");
			scanf("%d",&pos);
		}while(pos<0||pos>=tamanho);
		
		if(escolha==1){
			printf("Conteúdo do vetor na posição %d: %d",pos,vet[pos]);
		}else if(escolha==2){
			printf("Digite um valor para a posição %d: ",pos);
			scanf("%d",&vet[pos]);
		}
		printf("\n\nDeseja encerrar o programa?[s/n]: ");
		fflush(stdin);
		scanf("%c",&sair);
	}while(sair!='s');


	free(vet);
	getchar();
	return 0;
}

