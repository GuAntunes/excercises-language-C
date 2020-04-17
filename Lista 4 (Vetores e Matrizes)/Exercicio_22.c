#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetorA[10],vetorB[10],vetorC[20],cont,resto,A=0,B=0;
	
	for(cont=0;cont<10;cont++){
		printf("[%d]Digite um valor para o vetor A: ",cont);
		scanf("%d",&vetorA[cont]);
	}
	
	for(cont=0;cont<10;cont++){
		printf("[%d]Digite um valor para o vetor B: ",cont);
		scanf("%d",&vetorB[cont]);
	}
	
	for(cont=0;cont<20;cont++){
		resto = cont % 2;
		if(resto==0){
			vetorC[cont]= vetorA[A];
			A++;
		}else{
			vetorC[cont]=vetorB[B];
			B++;
		}
	}
	printf("\n\n");
	for(cont=0;cont<20;cont++){
		printf("[%d]%d ",cont,vetorC[cont]);
	}

	getch();
	return 0;
}

