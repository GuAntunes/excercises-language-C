#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


/*7. Leia um valor em real e a cotac¸ ˜ao do d´ olar. Em seguida, imprima o valor correspondente
em d´olares.*/


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float real, cotacao, dolar;
	
	printf("Digite o valor em Real: $");
	scanf("%f",&real);
	
	printf("Digite a cotação do dollar: ");
	scanf("%f",&cotacao);
	
	dolar= real / cotacao;
	
	system("cls");
	
	printf("O valor %.1f em reais corresponde a %.1f em dolares.",real,dolar);
	
	

	getch();
	return 0;
}

