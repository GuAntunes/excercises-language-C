#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void func(int num,int cont){
	
	if(cont==num){
		printf("%d",cont);
	}else{
		printf("%d\n",cont);
		func(num,cont+1);
	}
	
	
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&numero);
	
	func(numero,0);

	getchar();
	return 0;
}

