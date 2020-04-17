#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[8],cont,X,Y;
	
	for(cont=0;cont<8;cont++){
		printf("[%d]Digite um valor: ",cont+1);
		scanf("%d",&vetor[cont]);
		printf("\n");
	}	
	
	printf("\n\nDigite um valor X: ");
	scanf("%d",&X);
	printf("\n\nDigite um valor Y: ");
	scanf("%d",&Y);	

	printf("Posição %d no vetor: %d",X,vetor[X]);
	printf("\nPosição %d no vetor: %d",Y,vetor[Y]);

	getch();
	return 0;
}

