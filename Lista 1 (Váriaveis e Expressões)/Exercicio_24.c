#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num, resto, aux;
	
	printf("Digite o número desejado: ");
	scanf("%d",&num);
	
	for(aux=1000;aux>=1;aux=aux/10){
		resto = num / aux;
		printf("Número Gerado: %d\n",resto);
		num=num- resto *aux;
	}	
	
	
	
	
	

	getch();
	return 0;
}

