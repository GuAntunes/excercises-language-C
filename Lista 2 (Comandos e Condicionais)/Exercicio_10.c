#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int num;
	
	do{
		printf("Digite um n�mero da semana: ");
		scanf("%d",&num);
	}while(num>7||num<1);
	
	switch (num) {
	case 1:
		printf("Domingo");
		break;
	case 2: 
		printf("Segunda");
		break;
	case 3:
		printf("Ter�a");
		break;
	case 4:
		printf("Quarta");
		break;
	case 5:
		printf("Quinta");
		break;
	case 6:
		printf("Sexta");
		break;
	case 7:
		printf("S�bado");
		break;
	}
	

	getch();
	return 0;
}

