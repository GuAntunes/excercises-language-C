#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char palavra1[20],palavra2[20];
	
	
	printf("COMPARAÇÃO DE STRING");
	printf("\n\n\nDigite uma palavra: ");
	scanf("%20[^\n]",palavra1);
	fflush(stdin);
	printf("Digite outra palavra: ");
	scanf("%20[^\n]",palavra2);
	
	
	if(strcmp(palavra1,palavra2)==0){
		printf("\nAs palavras são iguais!!");
		printf("\n%s",palavra1);
		printf("\n%s",palavra2);
	}
	
	
	system("pause");
	return 0;
}

