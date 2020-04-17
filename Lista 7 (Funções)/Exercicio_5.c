#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pi = 3.1415;

float func(int R){
	float vol;
	vol = (4/3) * pi * pow(R,3);
	return (vol);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int raio;
	float volume;
	
	printf("Digite o raio da esfera: ");
	scanf("%d",&raio);
	
	volume = func(raio);
	
	printf("\nO volume da esfera é de: %.2f",volume);

	getch();
	return 0;
}

