#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

/*Sejam a e b os catetos de um tri ˆangulo, onde a hipotenusa ´e obtida pela equac¸ ˜ao:
hipotenusa =
p
a2 + b2. Fac¸a um programa que receba os valores de a e b e encontre o
valor da hipotenusa atrav´es da equac¸ ˜ao. Imprima no final o resultado dessa operac¸ ˜ao.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float cateto1,cateto2, hipotenusa;
	
	printf("Digite o valor do primeiro cateto: ");
	scanf("%f",&cateto1);
	
	printf("Digite o valor do segundo cateto: ");
	scanf("%f",&cateto2);
	
	hipotenusa= sqrt((pow(cateto1,2)+pow(cateto2,2))),	
	
	printf("\n\nHipotenusa: %.1f",hipotenusa);

	getch();
	return 0;
}

