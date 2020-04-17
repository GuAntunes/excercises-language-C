#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int cubo(int num){
	int x;
	if(num==1){
		x = 1;
	}else{
		x = pow(num,3) + cubo(num - 1);
	}
	
	
	return x;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int n, resp;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	
	resp = cubo(n);

	printf("Somatória: %d",resp);

	getchar();
	return 0;
}

