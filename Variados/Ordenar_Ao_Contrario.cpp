#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero,aux;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&numero);	
	
	if(numero==0){
		printf("N�mero inv�lido!!");
		return 0;
	}
	
	if(numero<0){
		numero = numero * -1;
		printf("-");
	}
	do{
		aux = numero % 10;
		printf("%d",aux);
		numero = numero / 10;
	}while(numero!=0);

	



	getchar();
	return 0;
}

