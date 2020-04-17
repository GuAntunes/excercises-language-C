#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vezes;
	char texto[100];	
	char caracter;
	do{
		printf("Digite quantas linhas deseja criptografar: ");
		scanf("%d",&vezes);
	}while(vezes<1);
	
	for(int cont=0;cont<vezes;cont++){
		system("cls");
		printf("Digite o texto: ");
		fflush(stdin);
		scanf("%100[^\n]",texto);
		
		for(int contador=0;contador<strlen(texto);contador++){
			if(isalpha(texto[contador])!=0){
				texto[contador] += 3;
			}
		}
		for(int aux=0, aux2=strlen(texto)-1;aux<aux2;aux++,aux2--){
			caracter = texto[aux];
			texto[aux] = texto[aux2];
			texto[aux2] = caracter;
		}
		for(int contador=strlen(texto)/2;contador<strlen(texto);contador++){
			texto[contador] -= 1;
		}
		
		printf("%s\n\n",texto);
		system("pause");
	}
	



	getchar();
	return 0;
}

