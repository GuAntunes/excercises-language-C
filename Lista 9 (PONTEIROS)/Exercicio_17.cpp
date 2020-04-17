#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <math.h>
using namespace std;

void frac(float num, int* inteiro, float* frac){
	
	*inteiro = floor(num);
	*frac = num - *inteiro;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float valor=123.456,fracao;
	int inteiro;
	
	frac(valor,&inteiro,&fracao);
	
	printf("Inteiro: %d",inteiro);
	printf("\nFração: %.3f",fracao);
	
	getchar();
	return 0;
}

