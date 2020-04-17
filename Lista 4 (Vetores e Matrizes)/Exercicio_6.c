#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10],cont,maior=0,menor=0;
	
	for(cont=0;cont<10;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		if(cont==0){
			maior=vetor[cont];
			menor=vetor[cont];
		}
		if(maior<vetor[cont]){
			maior=vetor[cont];
		}
		if(menor>vetor[cont]){
			menor=vetor[cont];
		}
	}	
	
	printf("\nO maior elemento é: %d",maior);
	printf("\nO menor elemento é: %d",menor);
	
	
	

	getch();
	return 0;
}

