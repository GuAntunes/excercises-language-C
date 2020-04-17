#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int x){
	int resp;
	
	if(x==0){
		resp = 1;
	}else{
		resp = x * soma(x - 1);
	}
	
	return resp;
	
}

int main(){
	setlocale(LC_ALL,"portuguese");

	int n,resultado;
		
	printf("Digite um número inteiro: ");
	scanf("%d",&n);	
	
	resultado = soma(n);

	printf("%d",resultado);
	
	getchar();
	return 0;
}

