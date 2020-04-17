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
		printf("Digite um número da semana: ");
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
		printf("Terça");
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
		printf("Sábado");
		break;
	}
	

	getch();
	return 0;
}

