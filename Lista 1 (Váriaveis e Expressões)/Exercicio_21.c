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
	
	printf("Digite a altura que deseja alcançar: ");
	scanf("%f",&altura);
	
	do{
		cont++;
		aux=aux+degrau;
	}while(aux<altura);
	
	printf("O usuário devera construir %d degraus para alcançar o objetivo",cont);
	
	getch();
	return 0;
}

