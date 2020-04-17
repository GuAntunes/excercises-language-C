#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco.
Retirar os espac¸os em branco do vetor e depois escrever o vetor resultante. */

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int cont,contador;
	char frase[50];
	
	printf("Digite a frase desejada: ");
	scanf("%50[^\n]",frase);	
	
	for(cont=0;frase[cont]!='\0';cont++){
		if(frase[cont]==' '){
			for(contador=cont;frase[contador]!='\0';contador++){
				frase[contador] = frase[contador+1];
			}
		}
	}
	
	printf("\n%s",frase);
	
	
	



	getch();
	return 0;
}

