#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	unsigned int variavel;
	
	printf("Digite um valor: ");
	scanf("%d",&variavel);
	
	printf("%u",variavel);

	getchar();
	return 0;
}

