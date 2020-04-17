#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int cont,soma=0;
	char palavra[50];	
	
	
	printf("Digite a frase desejada: ");
	scanf("%50[^\n]",palavra);
	
	for(cont=0;cont<=strlen(palavra);cont++){
		if(palavra[cont] == ' '){
			soma++;
		}
	}
	
	printf("\nA frase contém %d caracteres brancos.",soma);


	getch();
	return 0;
}

