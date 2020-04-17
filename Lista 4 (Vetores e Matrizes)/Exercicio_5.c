#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vetor[10],cont,par=0,resto;
	
	for(cont=0;cont<10;cont++){
		printf("\n[%d]Digite um valor: ",cont);
		scanf("%d",&vetor[cont]);
		resto = vetor[cont] %2;
		if(resto==0&&vetor[cont]!=0){
			par++;
		}
	}	
	
	printf("O vetor contém %d valores pares",par);
	

	getch();
	return 0;
}

