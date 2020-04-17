#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int num1, int num2){
	float somatoria;
	somatoria = num1+ num2;
	return somatoria;
}

int subtracao(int num1, int num2){
	float sub;
	sub = num1 - num2;
	return sub;
}

int multi(int num1, int num2){
	float multiplica;
	multiplica = num1 * num2;
	return multiplica;
}

int divisao(int num1, int num2){
	float div;
	div = num1/num2;
	return div;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero,numero1;
	float resultado;
	char simbolo;
		
	do{
		printf("Digite o primeiro número: ");
		scanf("%d",&numero);
	}while(numero<0);
	
	do{
		printf("Digite o segundo número: ");
		scanf("%d",&numero1);
	}while(numero<0);
	
	do{
		fflush(stdin);
		printf("Digite um simbolo: ");
		scanf("%c",&simbolo);
	}while(simbolo!='+'&&simbolo!='-'&&simbolo!='*'&&simbolo!='/');
	
	if(simbolo=='+'){
		resultado = soma(numero,numero1);
	}else if(simbolo=='-'){
		resultado = subtracao(numero,numero1);
	}else if(simbolo=='*'){
		resultado = multi(numero,numero1);
	}else{
		resultado = divisao(numero,numero1);
	}
	
	printf("\nResultado: %.1f",resultado);	

	getchar();
	return 0;
}

