#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[20],cont,contador,aux;
	
	for(cont=0;cont<20;cont++){
		printf("\nDigite o número desejado: ");
		scanf("%d",&vetor[cont]);
	}	
	
	for(cont=0;cont<20;cont++){
		aux = 0;
		for(contador=0;contador<cont;contador++){
			if(vetor[cont]==vetor[contador]){
				aux=1;
			}
		}
		
		if(aux==0){
			printf("%d ",vetor[cont]);
		}
	}
	

	getch();
	return 0;
}

