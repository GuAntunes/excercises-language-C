#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float func(int n1, int n2){
	float resp;
	resp = n1;
	for(int cont=1;cont<n2;cont++){
		resp = resp * n1;
	}
	printf("%f",resp);
	return resp;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, z;
	float resultado;
	
	printf("Digite o valor para x: ");
	scanf("%d",&x);
	
	printf("Digite o valor para z: ");
	scanf("%d",&z);
	
	resultado = func(x,z);



	getchar();
	return 0;
}

