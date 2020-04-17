#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char palavra[15],letra;
	int cont,soma=0;
	
	printf("Digite a palavra desejada: ");
	scanf("%15[^\n]",palavra);
	
	for(cont=0;cont<=strlen(palavra);cont++){
				switch (palavra[cont]){
			case 'a':
				soma++;
				continue;
			case 'e':
				soma++;
				continue;
			case 'i':
				soma++;
				continue;
			case 'o':
				soma++;
				continue;
			case 'u':
				soma++;
				continue;
		}
	}
	fflush(stdin);
	
	printf("\n\nA palavra contém %d vogais",soma);
	printf("\nDigite o caractere que deseja substituir as vogais: ");
	scanf("%c",&letra);
	
	for(cont=0;cont<=strlen(palavra);cont++){
		switch (palavra[cont]){
			case 'a':
				palavra[cont] = letra;
				continue;
			case 'e':
				palavra[cont]=letra;
				continue;
			case 'i':
				palavra[cont] = letra;
				continue;
			case 'o':
				palavra[cont] = letra;
				continue;
			case 'u':
				palavra[cont] = letra;
				continue;
		}
	}

	printf("\nPalavra digitada: %s",palavra);

	getch();
	return 0;
}

