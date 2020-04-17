#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float resto,resto1,resto2;
	int numero;
	
	printf("Digite o ano desejado: ");
	scanf("%d",&numero);
	
	resto = numero % 400;
	resto1=numero % 4;
	resto2=numero % 100;
	if(resto==0||resto1==0&&resto2!=0){
		printf("O ano %d é bissexto",numero);
	}else{
		printf("O ano %d não é bissexto",numero);
	}

	getch();
	return 0;
}

