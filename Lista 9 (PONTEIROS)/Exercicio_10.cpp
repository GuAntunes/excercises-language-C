#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vet[5],*p;
	p = &vet[0];
	
	for(int cont=0;cont<5;cont++){
		printf("Digite o valor para a posição %d: ",cont);
		scanf("%d",p);
		p++;
	}
	
	system("cls");
	p -= 5;
	for(int cont=0;cont<5;cont++){
		printf("%d\n",*p+*p);
		p++;
	}
	
	



	getchar();
	return 0;
}

