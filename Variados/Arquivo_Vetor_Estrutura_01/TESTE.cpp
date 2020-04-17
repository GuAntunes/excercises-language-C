#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>

using namespace std;

typedef struct dados{
	int num;
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *arq;
	
	arq = fopen("arq.txt","wb");
	
	dados file[3];
	
	for(int cont=0;cont<3;cont++){
		printf("Digite um valor: ");
		scanf("%d",&file[cont].num);
	}
	
	fwrite(file,sizeof(dados),3,arq);
	
	fclose(arq);
	getchar();
	return 0;
}

