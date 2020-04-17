#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int variavel=10;

void teste(){
	printf("%d",variavel);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int variavel=10;	
	teste();	

	getchar();
	return 0;
}

