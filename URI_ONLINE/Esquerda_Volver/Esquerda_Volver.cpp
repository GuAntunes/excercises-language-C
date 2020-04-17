#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int qt,num=0;	
	char caractere;
	
	do{
		printf("Digite a quantidade de comandos: ");
		scanf("%d",&qt);
	}while(qt<1||qt>1000);
	
	
	



	getchar();
	return 0;
}

