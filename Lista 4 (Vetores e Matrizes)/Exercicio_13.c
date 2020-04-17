#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int  cont,vetor[5],maior=0,menor=0,posm=0,posme=0;
	
	for(cont=0;cont<5;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		if(cont==0){
			maior=vetor[cont];
			posm = cont;
			menor= vetor[cont];
			posme;
		}
		if(maior<vetor[cont]){
			maior=vetor[cont];
			posm=cont;
		}
		if(menor>vetor[cont]){
			menor=vetor[cont];
			posme = cont;
		}
	}
	
	printf("\n\nO maior valor se encontra na posição %d do vetor",posm);
	printf("\n\nO menor valor se encontra na posição %d do vetor",posme);
	
	getch();
	return 0;
}
