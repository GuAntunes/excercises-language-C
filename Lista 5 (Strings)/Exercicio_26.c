#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char frase[100];
	int codigo = 3,cont;
	
	printf("Digite a frase a ser cripitografada: ");
	scanf("%100[^\n]",frase);
	
	for(cont=0;frase[cont]!='\0';cont++){
		if(frase[cont]==' '){
			continue;
		}
		frase[cont] = frase[cont]+3;
	}
	
	printf("\n%s",frase);


	getch();
	return 0;
}

