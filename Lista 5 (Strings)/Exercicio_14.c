#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char palavra[50];
	int cont;
	
	printf("Digite a palavra desejada: ");
	scanf("%50[^\n]",palavra);
	
	for(cont=0;cont<strlen(palavra);cont++){
		palavra[cont]=palavra[cont]+1;	
	}
	
	printf("\n\nPalavra: %s",palavra);
	
	
	
	



	getch();
	return 0;
}

