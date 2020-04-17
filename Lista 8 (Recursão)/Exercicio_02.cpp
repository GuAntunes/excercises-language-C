#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int n){
	int fato;
	
	if(n==0){
		fato = 1;
	}else{
		fato = n * fatorial(n - 1);
	}
	
	return fato;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num, resp;
	
	printf("Digite um número para o fatorial: ");
	scanf("%d",&num);
	
	resp = fatorial(num);
	
	printf("Fatorial: %d",resp);
	
	getchar();
	return 0;
}

