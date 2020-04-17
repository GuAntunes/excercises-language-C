#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void func(int cont){
	
	if(cont==0){
		printf("%d",cont);
	}else{
		printf("%d\n",cont);
		func(cont-1);
	}
	
	
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&numero);
	
	func(numero);

	getchar();
	return 0;
}

