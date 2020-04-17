#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void troca(int *v){
	*v = 100000;
}

int main(){
	setlocale(LC_ALL,"portuguese");

	int valor = 10;
	printf("Valor antes da função: %d",valor);
	
	troca(&valor);
	
	printf("\n\nValor depois da função: %d",valor);
	
	getch();
	return 0;
}

