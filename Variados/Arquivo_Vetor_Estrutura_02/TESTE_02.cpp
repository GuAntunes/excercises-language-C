#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

typedef struct dados{
	int num;
	char caracter[10];
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *arq;
	
	arq = fopen("arq.txt","rb");
	
	dados file[3];
	
	fread(file,sizeof(dados),3,arq);
	
	for(int cont=0;cont<3;cont++){
		printf("%d\n",file[cont].num);	
		printf("%s\n",file[cont].caracter);
	}
	
	fclose(arq);	
	getchar();
	return 0;
}

