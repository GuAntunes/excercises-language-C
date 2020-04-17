#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float vet[3][3];
	
	for(int cont=0;cont<3;cont++){
		for(int i=0;i<3;i++){
			printf("%d\n",&vet[cont][i]);
		}
	}
	
	
	
	



	getchar();
	return 0;
}

