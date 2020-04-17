#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fac¸a um programa que receba duas frases distintas e imprima de maneira invertida, trocando as letras A por *.*/

int main(){
	setlocale(LC_ALL,"portuguese");

	int cont,contador;
	char frase[30];
	
	printf("Digite a frase desejada: ");
	scanf("%30[^\n]",frase);
	
	for(cont=0;frase[cont]!='\0';cont++){
	}
	
	for(contador=cont;contador>=0;contador--){
		if(frase[contador]=='A'||frase[contador]=='a'){
			printf("*");
		}else{
			printf("%c",frase[contador]);
		}
	}


	getch();
	return 0;
}

