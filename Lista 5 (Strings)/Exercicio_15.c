#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char frase[50];
	int cont;
	
	printf("Digite a frase desejada: ");
	scanf("%50[^\n]",frase);	
	
	
	for(cont=0;frase[cont]!='\0';cont++){
		if(frase[cont]>=65&&frase[cont]<=90){
			frase[cont]=frase[cont]+32;
		}
	}
	
	printf("%s",frase);

	getch();
	return 0;
}

