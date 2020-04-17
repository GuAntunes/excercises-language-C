#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char frase[50] = "Gustavo antunes da silva";
	char palavra[20] = "antune";
	int conta;
	
	for(int cont=0;cont<strlen(frase);cont++){
		if(palavra[0]==frase[cont]){
			conta = 0;
			for(int i=0;i<strlen(palavra);i++){
				if(palavra[i]==frase[cont+i]){
					conta++;
				}
			}
			if(conta==strlen(palavra)){
				printf("Deu certo.");
			}
		}
	
	}


	



	getchar();
	return 0;
}

