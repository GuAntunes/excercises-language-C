#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int  cont,maior=0,media=0,menor=0,vetor[5];
	
	for(cont=0;cont<5;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		if(cont==0){
			maior= vetor[cont];
			menor=vetor[cont];
		}
		if(maior<vetor[cont]){
			maior = vetor[cont];
		}
		if(menor>vetor[cont]){
			menor = vetor[cont];
		}
		media = media + vetor[cont];
	}

	for(cont=0;cont<5;cont++){
		printf("%d ",vetor[cont]);
	}
	printf("\n\nO maior valor do vetor é: %d",maior);
	printf("\n\nO menor valor do vetor é: %d",menor);
	printf("\nA media dos números é: %d",media/5);
	
	getch();
	return 0;
}
