#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*ac¸a um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12%*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float valor;
	
	printf("Digite o valor do produto: ");
	scanf("%f",&valor);
	
	printf("\n\nO valor do produto com desconto: %.2f",valor-valor*0.12);
	

	getch();
	return 0;
}

