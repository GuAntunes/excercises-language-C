#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

void func(int *vet,int n){
	int *p = &vet[0];
	for(int cont=0;cont<3;cont++){
		*p = n;
		p++;
	}
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[3], num=10;
	
	func(vet,num);
	
	for(int cont=0;cont<3;cont++){
		printf("%d\n",vet[cont]);
	}
	
	getchar();
	return 0;
}

