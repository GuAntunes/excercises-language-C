#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Ler uma temperatura em graus Kelvin e apresent´ a-la convertida em graus Celsius.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float ke, ce;
	
	printf("Digite a temperatura em graus Kelvin: ");
	scanf("%f",&ke);
	
	ce = ke - 273.15;
	
	printf("%.2fº Kelvin é igual a %.2fº Celsius",ke,ce);	
	
	

	getch();
	return 0;
}

