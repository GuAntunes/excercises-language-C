#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int negativos(float *vet, int N){
	int neg=0;
	for(int cont=0;cont<N;cont++){
		if(vet[cont]<0){
			neg++;
		}
	}

	return neg;
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	float vet[5] = {1,-2,3,-4,5};	
	int num = 5, neg;
	
	neg = negativos(vet,num);
	
	printf("Quantidade de números negativos: %d",neg);
	



	getchar();
	return 0;
}

