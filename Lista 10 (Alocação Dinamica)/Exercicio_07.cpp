#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int loteria[6],jogo[6],*vet,tamanho=1,aux=0;
	vet = (int*) malloc (sizeof(int)*1);
	for(int cont=0;cont<6;cont++){
		printf("Digite o %dº número sorteado: ",cont+1);
		scanf("%d",&loteria[cont]);
	}
	
	system("cls");
	
	for(int cont=0;cont<6;cont++){
		printf("Digite o %dº que vc jogou: ",cont+1);
		scanf("%d",&jogo[cont]);
		for(int i=0;i<6;i++){
			if(loteria[i]==jogo[cont]){
				vet[aux] = jogo[cont];
				tamanho++;
				aux++;
				vet = (int*) realloc (vet,tamanho*sizeof(int));
			}
		}
	}
	
	system("cls");
	
	for(int cont=0;cont<aux;cont++){
		printf("%d\n",vet[cont]);
	}
	
	free(vet);
	getchar();
	return 0;
}

