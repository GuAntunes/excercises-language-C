#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pi = 3.141592;

float func(){
	float altura, raio,resp;
	
	printf("Digite a altura do cilindro: ");
	scanf("%f",&altura);
	printf("\nDigite o raio do cilindro: ");
	scanf("%f",&raio);
	
	resp = pi * (pow(raio,2) * altura);
	return resp;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float volume = func();
	
	printf("\n\nVolume: %f",volume);

	getch();
	return 0;
}

