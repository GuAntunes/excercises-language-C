#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculo(int kilometro, int litro){
	float media;
	media = kilometro / litro;
	
	if(media<8){
		printf("Venda o carro!!");
	}else if(media>=8&&media<=14){
		printf("Econômico!!");
	}else{
		printf("Super Economico!!");
	}
	
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int km,litros;
	
	printf("Digite a kilometragem: ");
	scanf("%d",&km);
	
	printf("Digite a quantidade de combustível consumido: ");
	scanf("%d",&litros);
	
	calculo(km,litros);
	
	



	getchar();
	return 0;
}

