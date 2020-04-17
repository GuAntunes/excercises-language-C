#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Ler uma temperatura em graus Fahrenheit e apresent´ a-la convertida em graus Celsius.

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float fa, ce;
	
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",&fa);
	
	ce = 5 * (fa-32)/90;
	
	printf("\n%.2fº Fahrenheit é igual a %.2fº Celsius",fa,ce);
	

	getch();
	return 0;
}

