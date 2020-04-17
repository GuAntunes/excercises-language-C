#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exibe(int n1, int n2){
	int soma = n1;
	for(int cont=1;cont<n2;cont++){
		soma = soma * n1;
	}
	return soma;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2,resultado;	
	
	
	printf("Digite o primeiro número: ");
	scanf("%d",&num1);
	
	printf("Digite o segundo número: ");
	scanf("%d",&num2);
	
	resultado = exibe(num1,num2);

	printf("Soma: %d",resultado);
	
	getchar();
	return 0;
}

