#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica(int num1, int num2, int num3){
	if(num1>num2+num3||num2>num1+num3||num3>num1+num2){
		printf("Esses valores não formam um triângulo");
		return 0;
	}
	return 1;
}

void triangulo(int num1, int num2, int num3){
	if(num1==num2&&num2==num3){
		printf("Triângulo Equilatero");
	}else if(num1==num2&&num2!=num3||num1==num3&&num1!=num2||num2==num3&&num2!=num1){
		printf("Triângulo Isósceles");
	}else{
		printf("Triângulo Escaleno");
	}
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int lado1, lado2, lado3, aux;
	
	do{
		printf("Digite o primeiro lado: ");
		scanf("%d",&lado1);
	}while(lado1<1);

	do{
		printf("Digite o segundo lado: ");
		scanf("%d",&lado2);
	}while(lado2<1);

	do{
		printf("Digite o terceiro lado: ");
		scanf("%d",&lado3);
	}while(lado3<1);

	aux = verifica(lado1,lado2,lado3);
	if(aux==0){
		return 0;
	}
	triangulo(lado1,lado2,lado3);

	getchar();
	return 0;
}

