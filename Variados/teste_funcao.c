#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int vetor[],int num){
	int cont;
	for(cont=0;cont<num;cont++){
		printf("[%d]Digite um número: ",cont);
		scanf("%d",&vetor[cont]);
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int *v,n,cont;
	
	printf("Digite um número n: ");
	scanf("%d",&n);	
	
	v = (int*) malloc (sizeof(int)*n);
	
	func(v,n);

	for(cont=0;cont<n;cont++){
		printf("%d -",v[cont]);
	}

	getch();
	return 0;
}

