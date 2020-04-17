#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int variavel = 100;
const int var = 100;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	printf("Variavel: %d",variavel);
	printf("\nVar: %d",var);
	variavel = 200;	
	//var = 200 este comando não pode ser executado pois uma variavel constante não pode ser alterada;
	
	printf("\n\n\nVariavel: %d",variavel);
	printf("\nVar: %d",var);
	
	
	
	



	getchar();
	return 0;
}

