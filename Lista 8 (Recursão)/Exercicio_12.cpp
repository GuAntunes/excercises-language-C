#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int analisa(int *vet,int indice,int menor){
	if(indice<0){
		return menor;
	}else{
		if(vet[indice]<menor){
			menor = vet[indice];
		}
		return analisa(vet,indice-1,menor);
	}
}




int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10] = {10,20,15,12,2,3,123,4,1,4},resp;
	
	resp = analisa(vetor,9,vetor[9]);
	
	printf("O menor número do vetor é: %d",resp);

	getchar();
	return 0;
}

