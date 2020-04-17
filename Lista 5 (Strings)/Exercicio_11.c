#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char palavra[15];
	int cont;
	
	printf("Digite a palavra desejada: ");
	scanf("%15[^\n]",palavra);
	
	
	for(cont=0;cont<=strlen(palavra);cont++){
		switch (palavra[cont]){
			case 'a':
				continue;
			case 'e':
				continue;
			case 'i':
				continue;
			case 'o':
				continue;
			case 'u':
				continue;
		}
		printf("%c",palavra[cont]);
	}
	
	
	



	getch();
	return 0;
}

