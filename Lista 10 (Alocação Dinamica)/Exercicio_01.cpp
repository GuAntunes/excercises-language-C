#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vet;
	
	vet = (int*) malloc (sizeof(int)*5);
	
	for(int cont=0;cont<5;cont++){
		printf("[%d]Digite um número: ",cont+1);
		scanf("%d",&vet[cont]);
	}
	system("cls");
	for(int cont=0;cont<5;cont++){
		printf("[%d]: %d\n",cont+1,vet[cont]);
	}

	free(vet);
	getchar();
	return 0;
}

