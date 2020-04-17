#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
//Variaveis locais estaticas n�o s�o destruidas quando a fun��o acabar mais continuaria sendo local 
//ou seja s� pode ser usada dentra da fun��o declarada

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

