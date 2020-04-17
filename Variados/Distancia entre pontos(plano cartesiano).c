#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), 
escreva a distância entre eles.*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int x1,x2,y1,y2,d;
	
	printf("Digite o valor de X no Ponto 1: ");
	scanf("%d",&x1);
	printf("Digite o valor de Y no Ponto 1: ");
	scanf("%d",&y2);
	printf("Digite o valor de X no Ponto 2: ");
	scanf("%d",&x2);
	printf("Digite o valor de Y no Ponto 2: ");
	scanf("%d",&y2);

	d= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	printf("A distância entre os pontos é de: %d",d);
	
	getch();
	return 0;
}

