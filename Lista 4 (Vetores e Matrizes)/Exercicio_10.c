#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[15], cont,media=0;
	
	for(cont=0;cont<15;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		media = media +vetor[cont];
	}
	
	printf("Média Geral: %d",media/15);
	
	getch();
	return 0;
}

