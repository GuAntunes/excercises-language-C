#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Operador condicional!!

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
		
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	numero > 0 ? printf("N�mero positivo!") : printf("N�mero Negativo!!");


	getchar();
	return 0;
}

