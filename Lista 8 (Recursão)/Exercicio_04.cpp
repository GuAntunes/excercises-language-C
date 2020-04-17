#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int potencia(int x, int y){
	int resposta;
	
	if(y==1){
		resposta = x;
	}else{
		resposta = x * potencia(x,y-1);
	}
	return resposta;
	
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int k, n,resp;	
	
	printf("Digite um número k: ");
	scanf("%d",&k);
	
	printf("Digite um número n: ");
	scanf("%d",&n);

	resp = potencia(k,n);

	printf("Resposta: %d",resp);

	getchar();
	return 0;
}

