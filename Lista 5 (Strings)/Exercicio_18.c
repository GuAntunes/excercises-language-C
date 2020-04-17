#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fac¸a um programa em que troque todas as ocorrˆencias de uma letra L1 pela letra L2 em uma string.
A string e as letras L1 e L2 devem ser fornecidas pelo usu´ario.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int cont;
	char l1,l2, frase[50];
	
	printf("Digite a frase desejada: ");
	scanf("%50[^\n]",frase);

	fflush(stdin);
	printf("\nDigite a letra que será substituida: ");
	scanf("%c",&l1);
	
	fflush(stdin);
	printf("\nDigite a letra que substituira a outra: ");
	scanf("%c",&l2);
	
	for(cont=0;frase[cont]!='\0';cont++){
		if(frase[cont]==l1){
			frase[cont]=l2;
		}
	}
	
	printf("\n\nFrase: %s",frase);


	getch();
	return 0;
}

