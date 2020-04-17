#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

void func(int *n, int *m, int *vezes){
	
	for(int cont=0;cont<9;cont++){
		if(cont==0){
			*m=n[cont];
			*vezes=1;
			continue;
		}
		
		if(*m==n[cont]){
			*vezes = *vezes + 1;
			continue;
		}
		
		if(*m<n[cont]){
			*vezes=1;
			*m=n[cont];
		}
	}	
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[9] = {5, 5, 15, 3, 7, 15, 8, 6, 15},maior=0,ocorrencia=0;
	
	func(vet,&maior,&ocorrencia);
	
	printf("Maior número: %d",maior);
	printf("\nOcorrencia: %d",ocorrencia);
	
	getchar();
	return 0;
}

