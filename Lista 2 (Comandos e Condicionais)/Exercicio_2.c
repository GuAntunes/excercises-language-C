#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	float numero;
	
	printf("Digite o número desejado: ");
	scanf("%f",&numero);
	
	if(numero>0){
		printf("A raiz quadrada do número %.1f é: %.2f",numero,sqrt(numero));
	}else if(numero<=0){
		printf("O quadrado do número %.1f é: %.2f",numero,pow(numero,2));
	}
	
	

	getch();
	return 0;
}

