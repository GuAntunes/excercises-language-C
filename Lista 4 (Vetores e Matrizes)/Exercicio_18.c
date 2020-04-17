#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10], cont, x,teste=0;
	
	for(cont=0;cont<10;cont++){
		printf("\nDigite o número desejado: ");
		scanf("%d",&vetor[cont]);
	}
	
	printf("\nDigite um valor para x: ");
	scanf("%d",&x);
	
	for(cont=0;cont<10;cont++){
		for(teste=0;teste<=vetor[cont];){
			teste = teste + x;
			if(vetor[cont]==teste){
				printf("%d ",vetor[cont]);
			}
		}
	}
	
	

	getch();
	return 0;
}

