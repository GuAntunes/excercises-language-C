#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[6],cont,resto;
	
	for(cont=0;cont<6;cont++){
		do{
			printf("\n[%d]Digite um valor: ",cont);
			scanf("%d",&vetor[cont]);
			resto = vetor[cont] % 2;
		}while(resto!=0||vetor[cont]==0);
	}	
	

	for(cont=5;cont>=0;cont--){
		printf("%d ",vetor[cont]);
	}	
	

	

	getch();
	return 0;
}

