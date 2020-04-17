#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vet,tamanho;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	
	vet = (int*) malloc (sizeof(int)*tamanho);
	
	for(int cont=0;cont<tamanho;cont++){
		printf("Digite um número para a posição %d: ",cont+1);
		scanf("%d",&vet[cont]);
	}
	system("cls");
	for(int cont=0;cont<tamanho;cont++){
		printf("[%d]: %d\n",cont+1,vet[cont]);
	}
	
	free(vet);
	getchar();
	return 0;
}

