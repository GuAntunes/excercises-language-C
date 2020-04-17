#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verifica(int n){
	int aux,resp,contador=0;
	
	for(int cont=1;cont<n;cont++){
		aux = 0;
		for(int i=1;i<=cont;i++){
			resp = cont % i;
			if(resp==0){
				aux++;
			}
		}
		if(aux==2){
			contador++;
		}
	}
	
	printf("Há %d números primos abaixo de %d.",contador,n);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	
	verifica(num);

	getchar();
	return 0;
}

