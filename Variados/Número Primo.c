#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int numero,cont;
	float rPar,resto;
	
	do{
		printf("Digite o número desejado: ");
		scanf("%d",&numero);
	}while(numero<0);
	
	rPar= numero % 2;
	if(rPar==0&&numero!=2){
		printf("O número %d não é primo",numero);
	}else{
		for(cont=3;cont<numero;cont++){
			resto = numero % cont;
			if (resto==0){
				printf("O número %d não é Primo",numero);
				cont = numero;
			}
		}
	}
	system("cls");
	if(cont==numero){
		printf("O número %d é Primo",numero);
	}
	

	getch();
	return 0;
}

