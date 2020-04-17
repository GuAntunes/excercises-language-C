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
	
	arq = fopen("arq2.txt","rb");
	

	for(int cont=0;cont<2;cont++){
		fread(&file[cont].num,sizeof(dados),2,arq);
		printf("%d\n",file[cont].num);
	}
	
	fclose(arq);	
	getchar();
	return 0;
}

