#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int num){
	int cont = 1, aux = 0, soma = 0, resp;
	resp = num / cont;
	while(resp>9){
		resp = num/ cont;
		cont = cont * 10;
	}
	
	do{
		soma = soma + ((num/cont) - aux);
		aux = (num/cont)*10;
		cont = cont / 10;
	}while(aux<num);
	return soma;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
		
	do{
		printf("Digite o número desejado: ");
		scanf("%d",&numero);
	}while(numero<1);
	
	numero = func(numero);	
	
	printf("\nSoma: %d",numero);
	
	getchar();
	return 0;
}

