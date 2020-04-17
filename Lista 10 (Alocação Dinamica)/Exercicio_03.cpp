#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vet, tamanho,par=0,impar=0;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	
	vet = (int*) malloc (sizeof(int)*tamanho);
	
	for(int cont=0;cont<tamanho;cont++){
		printf("[%d]Digite um número: ",cont);
		scanf("%d",&vet[cont]);
		if(vet[cont]%2==0&&vet[cont]!=0){
			par++;
		}else{
			impar++;
		}
	}
	
	system("cls");
	
	printf("Números pares: %d",par);
	printf("\nNúmero de impares: %d",impar);

	getchar();
	return 0;
}

