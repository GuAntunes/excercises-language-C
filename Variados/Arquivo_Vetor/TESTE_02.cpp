#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *arq;
	
	arq = fopen("arq.txt","rb");
	
	int vet[3];
	
	fread(vet,sizeof(int),3,arq);
	
	for(int cont=0;cont<3;cont++){
		printf("%d\n",vet[cont]);	
	}
	
	fclose(arq);	
	getchar();
	return 0;
}

