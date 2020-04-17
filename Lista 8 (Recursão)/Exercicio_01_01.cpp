#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n,resultado;

int soma(int n){
	
	if(n==0){
		resultado = 1;
	}else{
		resultado = n * soma(n - 1);
	}
	
	return resultado;
	
}

int main(){
	setlocale(LC_ALL,"portuguese");

		
	printf("Digite um número inteiro: ");
	scanf("%d",&n);	
	
	soma(n);

	printf("%d",resultado);
	
	getchar();
	return 0;
}

