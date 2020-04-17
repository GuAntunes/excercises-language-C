#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetorA[10],vetorB[10],vetorC[10],cont;
	
	for(cont=0;cont<10;cont++){
		printf("[%d]Digite um valor para o vetor A: ",cont);
		scanf("%d",&vetorA[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		printf("[%d]Digite um valor para o vetor B: ",cont);
		scanf("%d",&vetorB[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		vetorC[cont]= vetorA[cont] - vetorB[cont];
		printf("%d ",vetorC[cont]);
	}
	
	



	getch();
	return 0;
}

