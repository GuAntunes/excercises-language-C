#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float degrau,altura,aux=0;
	int cont=0;
	
	printf("Digite a altura do degrau: ");
	scanf("%f",&degrau);
	
	printf("Digite a altura que deseja alcan�ar: ");
	scanf("%f",&altura);
	
	do{
		cont++;
		aux=aux+degrau;
	}while(aux<altura);
	
	printf("O usu�rio devera construir %d degraus para alcan�ar o objetivo",cont);
	
	getch();
	return 0;
}

