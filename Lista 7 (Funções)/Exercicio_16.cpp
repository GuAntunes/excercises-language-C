#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void linhas(int num){
	for(int cont=0;cont<num;cont++){
		printf("=");
	}
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qtd;
	
	printf("Digite quantas linhas deverão ser desenhadas: ");
	scanf("%d",&qtd);
	
	linhas(qtd);

	getchar();
	return 0;
}

