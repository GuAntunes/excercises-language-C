#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int n){
	int aux=0;
	for(int cont=1;cont<=n;cont++){
		aux += cont;
	}
	printf("SOMAT�RIA: %d",aux);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num);
	
	func(num);

	getchar();
	return 0;
}

