#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int *vetor,int cont){
	
	if(cont==4){
		printf("%d",vetor[cont]);
	}else{
		printf("%d ",vetor[cont]);
		func(vetor,cont+1);
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetor[5] = {2,3,4,5,6};	
	
	func(vetor,0);

	getchar();
	return 0;
}

