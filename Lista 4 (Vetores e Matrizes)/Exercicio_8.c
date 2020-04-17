#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[6],cont;
	
	for(cont=0;cont<6;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
	}	
	

	for(cont=5;cont>=0;cont--){
		printf("%d ",vetor[cont]);
	}	
	

	

	getch();
	return 0;
}

