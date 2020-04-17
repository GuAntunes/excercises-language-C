#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10],cont,maior=0,posicao;
	
	for(cont=0;cont<10;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		if(cont==0){
			maior=vetor[cont];
		}
		if(maior<vetor[cont]){
			maior=vetor[cont];
			posicao = cont;
		}
	}	
	
	printf("\nO maior elemento é: %d\n Ele se encontra na posição %d do vetor",maior,posicao);

	
	
	

	getch();
	return 0;
}

