#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int x){
	int resp=1;
	
	for(int cont=x;cont>1;cont-=2){
		resp*= cont; 
	}
	return resp;
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num, resp;
	
	do{
		printf("Digite um número inteiro: ");
		scanf("%d",&num);
	}while(num%2==0);
	
	resp = func(num);

	printf("Fatorial Duplo: %d",resp);
	
	getchar();
	return 0;
}

