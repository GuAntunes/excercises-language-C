#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[9] = {1,2,3,4,5,6,7,8,9},*p;
	
	p = &vet[0];
	
	for(int cont=0;cont<9;cont++){
		*p = *p+1;
		printf("%d\n",*p);
		p++;
	}
	printf("\n\n");
	p = vet;
	for(int cont=0;cont<9;cont++){
		p[cont] = p[cont] + 1;
		printf("%d\n",p[cont]);
	}
	

	getchar();
	return 0;
}

