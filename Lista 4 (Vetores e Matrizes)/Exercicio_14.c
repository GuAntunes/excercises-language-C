#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int  cont,vetor[10],contador,aux[10],aux2=0,cont2,auxif;
	
	for(cont=0;cont<10;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		for(contador=0;contador<10;contador++){
			auxif= 0;
			if(cont==contador){
				continue;
			}
			for(cont2=0;cont2<aux2;cont2++){
				if(aux[cont2]==vetor[cont]){
					auxif=1;
					break;
				}
			}
			if(auxif==1){
				break;
			}
			if(vetor[cont]==vetor[contador]){
				printf("\nValor igual: %d",vetor[contador]);
				aux[aux2] = vetor[cont];
				aux2++;
				break;
			}
		}
	}
	
	getch();
	return 0;
}
