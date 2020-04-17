#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Fac¸a um programa para ler as dimens˜oes de um terreno (comprimento c e largura l),
bem como o prec¸o do metro do arame p, ent˜ao fornecer como sa´ýda o custo para cercar
este mesmo terreno.*/

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int c, l;
	float arame;
	
	printf("Digite o comprimento do terreno: ");
	scanf("%d",&c);
	printf("\nDigite a largura do terreno: ");
	scanf("%d",&l);
	printf("\nDigite o preço do metro do arame: ");
	scanf("%f",&arame);
	
	arame = arame * ((c*2)+(l*2));

	printf("O custo para cercar este terreno é de: R$%.2f",arame);
	
	
	getch();
	return 0;
}

