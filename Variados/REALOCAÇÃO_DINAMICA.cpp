#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int tamanho,*vetor,realoca;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);	
	
	vetor = (int*) malloc (sizeof(int)*tamanho);
	
	for(int cont=0;cont<tamanho;cont++){
		vetor[cont] = rand();
		printf("\nVetor[%d]: %d",cont,vetor[cont]);
	}
	system("pause");
	system("cls");
	
	printf("Digite o quanto deseja realocar: ");
	scanf("%d",&realoca);
	
	vetor = (int*) realloc (vetor,sizeof(int)*(tamanho+realoca));
	
	for(int cont=0;cont<(tamanho+realoca);cont++){
		vetor[cont] = rand();
		printf("\nVetor[%d]: %d",cont,vetor[cont]);
	}
	
	free(vetor);
	getchar();
	return 0;
}

