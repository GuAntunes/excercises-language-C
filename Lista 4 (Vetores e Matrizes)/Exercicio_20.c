#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escrevaumprogramaqueleian´umerosinteirosnointervalo[0,50]eosarmazeneemum 
vetor com 10 posic¸˜oes. Preencha um segundo vetor apenas com os n´umeros ´impares do primeiro vetor. 
Imprima os dois vetores, 2 elementos por linha.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10],impar[10],cont,aux=0,resto,auxiliar=0;
	
	for(cont=0;cont<10;cont++){
		impar[cont] = 0;
	}
	
	for(cont=0;cont<10;cont++){
		do{
			printf("[%d]Digite o número desejado: ",cont);
			scanf("%d",&vetor[cont]);
		}while(vetor[cont]>50||vetor[cont]<0);
		resto = vetor[cont] % 2;
		if(resto!=0){
			impar[aux] = vetor[cont];
			aux++;
		}
	}
	
	printf("\n\nNúmero do Primeiro Vetor: \n\n");
	for(cont=0;cont<10;cont++){
		if(auxiliar<=1){
			printf("%d ",vetor[cont]);
			auxiliar++;
		}else{
			auxiliar=0;
			cont--;
			printf("\n");
		}
	}
	
	printf("\n\nNúmero do Segundo Vetor com números impares do Primeiro: \n\n");
	auxiliar = 0;
	for(cont=0;cont<=aux;cont++){
			if(auxiliar<=1){
				printf("%d ",impar[cont]);
				auxiliar++;
			}else{
				auxiliar=0;
				cont--;
				printf("\n");
			}
	}
	
	



	getch();
	return 0;
}

