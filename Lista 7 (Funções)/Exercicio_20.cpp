#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int numero){
	int fatorial=1;
	for(int cont=numero;cont>1;cont--){
		fatorial = fatorial * cont;
	}
	return fatorial;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n,resp;
		
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	
	resp = fatorial(n);

	printf("Fatorial: %d",resp);

	getchar();
	return 0;
}

