#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *vetor, cont, n,contador,aux,aux1;	
	
	printf("Digite um número n: ");
	scanf("%d",&n);
	
	vetor = (int*) malloc (sizeof(int)*n);
	for(cont=0;cont<n;cont++){
		printf("Digite um valor: ");
		scanf("%d",&vetor[cont]);
	}
	
	for(cont=0;cont<n;cont++){
		aux1=0;
		for(contador=0;contador<n-1;contador++){
			if(vetor[contador]>vetor[contador+1]){
				aux = vetor[contador];
				vetor[contador] = vetor[contador+1];
				vetor[contador + 1] = aux;
				aux1=1;
			}		
		}
		if(aux1==0){
			break;
		}
	}
	
	system("cls");
	
	for(cont=0;cont<n;cont++){
		printf("%d ",vetor[cont]);
	}
	



	getch();
	return 0;
}

