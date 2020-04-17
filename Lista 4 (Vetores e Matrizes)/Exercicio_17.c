#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10],cont;
	
	for(cont=0;cont<10;cont++){
		printf("\nDigite o número desejado: ");
		scanf("%d",&vetor[cont]);
		if(vetor[cont]<0){
			vetor[cont]=0;
		}
	}
	
	for(cont=0;cont<10;cont++){
		printf("%d ",vetor[cont]);
	}
	

	getch();
	return 0;
}

