#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float peso, altura;
	char classe;
	
	printf("Digite a altura da pessoa: ");
	scanf("%f",&altura);
	
	printf("\nDigite o peso da pessoa: ");
	scanf("%f",&peso);
	
	if(altura<1.20){
		if(peso<=60){
			classe='A';
		}else if (peso>60&&peso<=90){
			classe='D';
		}else if(peso>90){
			classe = 'G';
		}
	}else if(altura>=1.20&&altura<1.70){
		if(peso<=60){
			classe='B';
		}else if (peso>60&&peso<=90){
			classe='E';
		}else if(peso>90){
			classe = 'H';
		}
	}else if(altura>=1.70){
		if(peso<=60){
			classe='C';
		}else if (peso>60&&peso<=90){
			classe='F';
		}else if(peso>90){
			classe = 'I';
		}
	}
	
	printf("\n\nA pessoa está classificada como: %c",classe);

	getch();
	return 0;
}

