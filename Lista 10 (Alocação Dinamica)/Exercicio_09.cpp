#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vet,aux=1,cont=0;

	vet = (int*) malloc (aux*sizeof(int));

	do{
		vet = (int*) realloc (vet,aux*sizeof(int));
		printf("[%d]Digite o valor desejado: ",cont);
		scanf("%d",&vet[cont]);
		aux++;
		cont++;
	}while(vet[cont]!=0);
	
	system("cls");
	
	for(int cont=0;cont<aux;cont++){
		printf("[%d]: %d\n",cont,vet[cont]);
	}
	
	getchar();
	return 0;
}

