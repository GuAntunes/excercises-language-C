#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct dados{
	int num;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *arq;
	dados file[2];
	
	arq = fopen("arq2.txt","wb");
	
	for(int cont=0;cont<2;cont++){
		printf("Digite um numero: ");
		scanf("%d",&file[cont].num);
		fwrite(&file[cont],sizeof(dados),1,arq);
	}


	fclose(arq);
	getchar();
	return 0;
}

