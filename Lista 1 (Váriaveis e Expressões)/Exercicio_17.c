#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

float valor=30;
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int dias;
	float imposto;
	
	printf("Digite a quantidade de dias trabalhados: ");
	scanf("%d",&dias);
	
	imposto = (dias*valor)*0.08;
	
	printf("A empresa deverá pagar: %f",(dias*valor)-imposto);
	

	getch();
	return 0;
}

