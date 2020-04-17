#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int tamanho, *vet;
	
	do{
		printf("Digite o tamanho do vetor: ");
		scanf("%d",&tamanho);
	}while(tamanho<10);
	
	vet = (int*) malloc (sizeof(int)*tamanho);
	
	for(int cont=0;cont<10;cont++){
		vet[cont] = rand()%101;
		printf("%d\n",vet[cont]);
	}

	free(vet);
	getchar();
	return 0;
}

