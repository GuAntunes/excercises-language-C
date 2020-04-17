#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Crie um programa que calcula o comprimento de uma string (n ˜ao use a func¸ ˜ao strlen).

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char frase[50],aux=' ';
	int cont=0;
	
	printf("Escreva a frase desejada: ");
	scanf("%50[^\n]",frase);
	
	for(cont=0;aux!='\0';cont++){
		aux = frase[cont];
	}
	
	printf("\n\nO comprimento desta string é de: %d",cont - 1);

	getch();
	return 0;
}

