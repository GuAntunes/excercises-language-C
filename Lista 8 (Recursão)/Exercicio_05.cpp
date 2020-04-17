#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mult_resp(int x, int m){
	int resultado;
	if(m==1){
		resultado = x;
	}else{
		resultado = x + mult_resp(x,m-1);
	}
	
	return resultado;
	
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero, mult,resp;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&numero);
	
	printf("Digite o número que multiplicara: ");
	scanf("%d",&mult);

	resp = mult_resp(numero,mult);
	
	printf("Resposta: %d",resp);
	
	getchar();
	return 0;
}

