#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char letra;
	
	printf("Digite a letra desejada: ");
	scanf("%c",&letra);	
	
	printf("\n\nletra: %c",tolower(letra));

	getch();
	return 0;
}

