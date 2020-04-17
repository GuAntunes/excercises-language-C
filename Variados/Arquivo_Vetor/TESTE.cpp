#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "gustavo.h"
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	FILE *arq;
	
	arq = fopen("arq.txt","wb");
	
	int vet[3] = {1,2,3};
	
	fwrite(vet,sizeof(int),3,arq);
	
	fclose(arq);
	getchar();
	return 0;
}

