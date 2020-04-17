#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int n){
	for(int cont=1;cont<=n;cont++){
		for(int cont2=n-cont;cont2>=1;cont2--){
			printf(" ");
		}
		for(int i=1;i<=(cont*2-1);i++){
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

