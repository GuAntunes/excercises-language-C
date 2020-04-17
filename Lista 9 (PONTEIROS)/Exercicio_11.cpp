#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[5];	
	
	for(int cont=0;cont<5;cont++){
		printf("Digite o valor para a posição %d: ",cont);
		scanf("%d",&vet[cont]);
	}
	
	system("cls");
	
	for(int cont=0;cont<5;cont++){
		if(vet[cont]%2==0){
			printf("%d\n",&vet[cont]);
		}
	}


	getchar();
	return 0;
}

