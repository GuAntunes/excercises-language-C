#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int n){
	for(int cont=1;cont<=n;cont++){
		for(int i=1;i<=cont;i++){
			printf("*");
		}
		printf("\n");
	}
	for(int cont=n-1;cont>=1;cont--){
		for(int i=cont;i>=1;i--){
			printf("*");
		}
		printf("\n");
	}
	return;
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	
	func(num);

	getchar();
	return 0;
}

