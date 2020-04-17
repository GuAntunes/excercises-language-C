#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int numero,resto;
	
	do{
		printf("Digite o número desejado: ");
		scanf("%d",&numero);
	}while(numero==0);
	resto = numero % 2;
	
	if(resto==0){
		printf("O número é par");
	}else{
		printf("O número não é par");
	}
	
	

	getch();
	return 0;
}

