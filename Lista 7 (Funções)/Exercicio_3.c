#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fac�a uma func��ao para veri?car se um n�umero �e positivo ou negativo. 
Sendo que o valor de retorno ser�a 1 se positivo, -1 se negativo e 0 se for igual a 0. */

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Digite o n�mero que deseja verificar: ");
	scanf("%d",&numero);
	
	numero = resultado(numero);
	
	if(numero==1){
		printf("O n�mero � positivo");
	}else if(numero==-1){
		printf("O n�mero � negativo");
	}else if(numero==0){
		printf("O n�mero � nulo");
	}
	
	getch();
	return 0;
}


int resultado(int num){
	
	if(num>0){
		return 1;
	}else if(num<0){
		return -1;
	}else if(num==0){
		return 0;
	}
}

