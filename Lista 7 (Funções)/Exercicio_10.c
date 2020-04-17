#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifica(int num1, int num2){
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n1, n2, resp;
	
	printf("Número 1: ");
	scanf("%d",&n1);
	printf("\nNúmero 2: ");
	scanf("%d",&n2);
	
	
	resp = verifica(n1,n2);
	
	printf("O maior número é: %d",resp);



	getch();
	return 0;
}

