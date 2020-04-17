#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

const float pi = 3.141592;

void calc_esfera(float R, float *area, float *volume){
	*area = 4 * pi * (R*R);
	*volume = (4/3) * pi * (R*R*R);
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float raio, area, volume;
	
	printf("Digite o raio da esfera: ");
	scanf("%f",&raio);
	
	calc_esfera(raio, &area, &volume);

	system("cls");
	
	printf("Área: %f\n",area);
	printf("Volume: %f",volume);

	getchar();
	return 0;
}

