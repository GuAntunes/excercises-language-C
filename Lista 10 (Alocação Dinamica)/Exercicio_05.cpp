#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int tamanho, *vet,x;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	
	vet = (int*) malloc (sizeof(int)*tamanho);
	
	for(int cont=0;cont<tamanho;cont++){
		printf("[%d]Digite um número: ",cont);
		scanf("%d",&vet[cont]);
	}
	
	printf("Digite um número x: ");
	scanf("%d",&x);
	system("cls");
	printf("Números multiplos de %d no vetor:\n",x);
	for(int cont=0;cont<tamanho;cont++){
		if(vet[cont]%x==0){
			printf("%d\n",vet[cont]);
		}
	}
	
	getchar();
	return 0;
}

