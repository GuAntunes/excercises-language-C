#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int num,int cont){
	
	if(num==cont){
		printf("%d",num);
	}else{
		printf("%d\n",cont);
		func(num,cont+2);
	}
	
	return;
}

int main(){
	setlocale(LC_ALL,"portuguese");
		
	int numero;
	
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	func(numero,0);
	



	getchar();
	return 0;
}

