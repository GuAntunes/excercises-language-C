#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
//Variaveis locais estaticas não são destruidas quando a função acabar mais continuaria sendo local 
//ou seja só pode ser usada dentra da função declarada

void teste(){
	static int variavel = 10;
	variavel *= 3;
	printf("%d\n",variavel);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	teste();	
	teste();
	teste();
	teste();
	teste();
	teste();

	getchar();
	return 0;
}

