#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int func(int *v1,int *v2,int *v3){

	for(int cont=0;cont<sizeof(v1);cont++){
		v3[cont] = v1[cont] + v2[cont];
	}
	
	return 1;	
} 

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet1[5] = {1,2,3,4,5};
	int vet2[5] = {1,2,3,4,5};	
	int *vet3,x;
	printf("v3 - %d - *v3 - %d - &v3 - %d",vet3,*vet3,&vet3);
	system("pause");
	
	if(sizeof(vet1)!=sizeof(vet2)){
		printf("Os vetores tem tamanhos diferentes");
		getchar();
		exit(0);
	}
	vet3 = (int*) malloc (sizeof(int)*sizeof(vet1));
	
	x = func(vet1,vet2,vet3);
		
	for(int cont=0;cont<sizeof(vet1);cont++){
		printf("[%d]: %d",cont,vet3[cont]);
	}
	
	
	getchar();
	return 0;
}

