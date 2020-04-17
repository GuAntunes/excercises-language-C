#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char palavra[15];	
	int cont, qtd;
	
	
	printf("Digite um palavra: ");
	scanf("%15[^\n]",palavra);
	
	qtd = strlen(palavra);
	
	for(cont=qtd;cont>=0;cont--){
		printf("%c",palavra[cont]);
	}
	
	



	getch();
	return 0;
}

