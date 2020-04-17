include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int  cont,neg=0,pos=0;
	float vetor[10];
	
	for(cont=0;cont<10;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		if(vetor[cont]<0){
			neg++;
		}
		if(vetor[cont]>0){
			pos = pos + vetor[cont];
		}
	}
	
	printf("Quantidade de números negativos: %d",neg);
	printf("Soma dos números positivos: %d",pos);
	
	getch();
	return 0;
}
