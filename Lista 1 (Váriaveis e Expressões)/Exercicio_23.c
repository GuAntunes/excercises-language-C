#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int numero, resto,lido;
	
	printf("Digite o número desejado: ");
	scanf("%d",&numero);	
	
	lido = numero;
	resto = numero % 10 * 100;
	numero = numero/10;
	resto = resto + numero % 10 * 10;
	numero = numero / 10;
	resto = resto + numero;
	
	system("cls");
	
	printf("Número Lido: %d",lido);
	printf("\nNúmero Gerado: %d",resto);
	

	getch();
	return 0;
}

