#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vet,aux=0;
	
	vet = (int*) calloc (1500,sizeof(int));
	
	for(int cont=0;cont<1500;cont++){
		if(vet[cont]!=0){
			aux=1;
		}
		vet[cont] = cont;
	}
	
	system("cls");
	
	if(aux==0){
		printf("Todas as posições do vetor estão zeradas.\n");
	}else{
		printf("Nem todas as posições do vetor estão zeradas.\n\n");
	}
	
	for(int cont=0;cont<10;cont++){
		printf("[%d]: %d\n",cont,vet[cont]);
	}
	
	for(int cont=1490;cont<1500;cont++){
		printf("[%d]: %d\n",cont,vet[cont]);
	}
	
	free(vet);
	getchar();
	return 0;
}

