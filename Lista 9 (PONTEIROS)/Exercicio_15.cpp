#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

void func(int *v){
	
	for(int cont=0;cont<3;cont++){
		printf("%d\n",*v);
		v++;	
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[3] = {2,3,4};	
	
	func(vet);

	getchar();
	return 0;
}

