#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int aux=0,cont;
	char contagem[50];
	
	printf("Digite os n�meros: ");
	scanf("%50[^\n]",contagem);
	
	for(cont=0;contagem[cont]!='\0';cont++){
		if(contagem[cont]=='1'){
			aux++;
		}
	}	
	
	printf("O n�mero 1 aparece %d veses na string",aux);

	getch();
	return 0;
}

