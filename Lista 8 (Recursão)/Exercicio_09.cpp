#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int num){
	
	if(num==0){
		printf("%d",num);
	}else{
		printf("%d\n",num);
		func(num-2);
	}
	
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	func(numero);
	



	getchar();
	return 0;
}

