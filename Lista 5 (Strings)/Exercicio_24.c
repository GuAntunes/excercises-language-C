#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char string[100],caractere;
	int cont,posicao;
	
	printf("Digite uma frase: ");
	scanf("%100[^\n]",string);
	fflush(stdin);
	
	printf("\n\nDigite um caractere: ");
	scanf("%c",&caractere);
	
	printf("Digite o n�mero da posi��o inicio: ");
	scanf("%d",&posicao);

	for(cont=posicao;string[cont]!='\0';cont++){
		if(string[cont]==caractere){
			printf("\nO caractere se encontra na posi��o %d do vetor",cont);
			break;
		}
	}
	
	getch();
	return 0;
}

