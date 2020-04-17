#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float func(){
	int ca1, ca2;
	float resp;
	
	printf("Digite o valor do primeiro cateto: ");
	scanf("%d",&ca1);
	printf("\nDigite o valor do segundo cateto: ");
	scanf("%d",&ca2);
	
	resp = sqrt((pow(ca1,2)+pow(ca2,2)));
	return resp;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float resposta = func();
	
	printf("HIPOTENUSA: %f",resposta);
	
	
	
	



	getch();
	return 0;
}

