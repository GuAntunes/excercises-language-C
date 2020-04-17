#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float altura, raio, volume;
	
	
	printf("Digite a altura do cilindro: ");
	scanf("%f",&altura);
	printf("Digite o raio do cilindro: ");
	scanf("%f",&raio);
	
	volume= 3.141592 * pow(raio,2) * altura;
	
	printf("\n\nO volume deste cilindro é: %.1f",volume);
	
	
	

	getch();
	return 0;
}

