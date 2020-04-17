#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Operador condicional!!

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
		
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	numero > 0 ? printf("Número positivo!") : printf("Número Negativo!!");


	getchar();
	return 0;
}

