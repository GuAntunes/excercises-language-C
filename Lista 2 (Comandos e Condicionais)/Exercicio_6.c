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
		printf("Digite o n�mero desejado: ");
		scanf("%d",&numero);
	}while(numero==0);
	resto = numero % 2;
	
	if(resto==0){
		printf("O n�mero � par");
	}else{
		printf("O n�mero n�o � par");
	}
	
	

	getch();
	return 0;
}

