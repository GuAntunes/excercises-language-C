#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct func{
	char nome[20] = "Gustavo Antunes";
	int idade = 18;
	float teste  = 20.0122;	
};

void funcao(func info){
	printf("%s",info.nome);
	printf("\n%d",info.idade);
	printf("\n%f",info.teste);
}

int main(){
	setlocale(LC_ALL,"portuguese");	
	
	func var;

	funcao(var);
	
	getchar();
	return 0;
}

