#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int func(int num){
	int raiz;
	raiz = sqrt(num);
	if(pow(raiz,2)==num){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int numero, resp;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&numero);	
	
	resp = func(numero);
	
	if (resp==0){
		printf("\n\nO n�mero � um quadrado perfeito!!");
	}else{
		printf("\n\nO n�mero n�o � um quadrado perfeito!!");
	}
	
	
	getch();
	return 0;
}

