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
	
	arq = fopen("arq.txt","rb");
	
	dados file[3];
	
	fread(file,sizeof(dados),3,arq);
	
	for(int cont=0;cont<3;cont++){
		printf("%d\n",file[cont].num);	
	}
	
	fclose(arq);	
	getchar();
	return 0;
}

